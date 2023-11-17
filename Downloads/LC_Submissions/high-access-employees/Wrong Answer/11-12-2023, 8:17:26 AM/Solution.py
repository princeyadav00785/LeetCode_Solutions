// https://leetcode.com/problems/high-access-employees

from collections import defaultdict

class Solution:
    def findHighAccessEmployees(self, access_times):
        def time_to_minutes(time_str):
            return int(time_str[:2]) * 60 + int(time_str[2:])

        access_dict = defaultdict(list)

        for name, time_str in access_times:
            access_dict[name].append(time_to_minutes(time_str))

        high_access_employees = []

        for name, times in access_dict.items():
            times.sort()
            count = 0

            for i in range(len(times)):
                for j in range(i + 1, len(times)):
                    if times[j] - times[i] <= 60:
                        count += 1
                    else:
                        break

            if count >= 2:
                high_access_employees.append(name)

        return high_access_employees

