// https://leetcode.com/problems/count-anagrams

class Solution {
public:
    int countAnagrams(string s) {
        const int mod = 1e9 + 7;
        long long ans = 1;
        int n = s.length();

        unordered_map<char, int> freqMap;
        int totalChars = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == ' ') {
                ans = (ans * factorial(totalChars, mod)) % mod;
                totalChars = 0;
            } else {
                freqMap[s[i]]++;
                totalChars++;
            }
        }

        ans = (ans * factorial(totalChars, mod)) % mod;

        return ans/2;
    }

private:
    int factorial(int n, int mod) {
        long long fact = 1;
        for (int i = 2; i <= n; i++) {
            fact = (fact * i) % mod;
        }
        return fact;
    }
};
