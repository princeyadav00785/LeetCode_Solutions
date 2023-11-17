// https://leetcode.com/problems/maximize-the-profit-as-the-salesman

class Solution:
    def maximizeTheProfit(self, n, offers):
        offers.sort(key=lambda x: x[1])

        arr = [0] * n
        oI = 0

        for i in range(n):
            arr[i] = arr[i - 1] if i > 0 else 0
            
            while oI < len(offers) and offers[oI][1] == i:
                start = offers[oI][0]
                gold = offers[oI][2]
                arr[i] = max(arr[i], (arr[start - 1] if start > 0 else 0) + gold)
                oI += 1

        return arr[n - 1]
