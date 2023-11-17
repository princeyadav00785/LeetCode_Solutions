// https://leetcode.com/problems/count-anagrams

class Solution {
public:
    int countAnagrams(string s) {
        const int mod = 1e9 + 7;
        long long ans = 1;
        int n = s.length();
        int totalChars = 0;
        unordered_map<char, int> freqMap;

        for (int i = 0; i < n; i++) {
            if (s[i] == ' ' || i == n - 1) {
                if (i == n - 1) {
                    freqMap[s[i]]++;
                    totalChars++;
                }

                long long t = 1;
                for (auto x : freqMap) {
                    t = (t * factorial(x.second, mod)) % mod;
                }
                ans = (ans * factorial(totalChars, mod)) % mod;
                ans = (ans * modularInverse(t, mod)) % mod;

                totalChars = 0;
                freqMap.clear();
            } else {
                freqMap[s[i]]++;
                totalChars++;
            }
        }

        return ans;
    }

private:
    int factorial(int n, int mod) {
        long long fact = 1;
        for (int i = 2; i <= n; i++) {
            fact = (fact * i) % mod;
        }
        return fact;
    }

    int modularInverse(long long int a, int mod) {
        int b = mod - 2;
        int result = 1;

        while (b > 0) {
            if (b & 1) {
                result = (result * a) % mod;
            }
            a = (a * a) % mod;
            b >>= 1;
        }

        return result;
    }
};
