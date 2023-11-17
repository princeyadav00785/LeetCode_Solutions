// https://leetcode.com/problems/count-anagrams

class Solution:
    def countAnagrams(self, s: str) -> int:
        mod = 10**9 + 7
        ans = 1
        n = len(s)
        totalChars = 0
        freqMap = {}

        for i in range(n):
            if s[i] == ' ' or i == n - 1:
                if i == n - 1:
                    freqMap[s[i]] = freqMap.get(s[i], 0) + 1
                    totalChars += 1

                t = 1
                for freq in freqMap.values():
                    t = (t * self.factorial(freq, mod)) % mod

                ans = (ans * self.factorial(totalChars, mod)) % mod
                ans = (ans * self.modularInverse(t, mod)) % mod

                totalChars = 0
                freqMap = {}
            else:
                freqMap[s[i]] = freqMap.get(s[i], 0) + 1
                totalChars += 1

        return ans

    def factorial(self, n: int, mod: int) -> int:
        fact = 1
        for i in range(2, n+1):
            fact = (fact * i) % mod
        return fact

    def modularInverse(self, a: int, mod: int) -> int:
        b = mod - 2
        result = 1

        while b > 0:
            if b & 1:
                result = (result * a) % mod
            a = (a * a) % mod
            b >>= 1

        return result
