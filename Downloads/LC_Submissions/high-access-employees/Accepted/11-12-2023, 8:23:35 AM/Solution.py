// https://leetcode.com/problems/high-access-employees

from collections import defaultdict

class Solution:
    def findHighAccessEmployees(self, access_times):
        def time_to_minutes(time_str):
            return int(time_str[:2]) * 60 + int(time_str[2:])

        access_dict = defaultdict(list)
        access_count = defaultdict(int)

        for name, time_str in access_times:
            access_dict[name].append(time_to_minutes(time_str))

        for name, times in access_dict.items():
            times.sort()

            for i in range(len(times)):
                count = 1
                for j in range(i + 1, len(times)):
                    if times[j] - times[i] >= 60:
                        break
                    count += 1

                access_count[name] = max(access_count[name], count)

        high_access_employees = [name for name, count in access_count.items() if count >= 3]
        return high_access_employees
