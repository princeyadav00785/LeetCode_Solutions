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

            if (s[i] == ' '||i==n-1) {
                if(i==n-1){
                     freqMap[s[i]]++;
                totalChars++;
                }
                int t=1;
                for(auto x:freqMap){
                    cout<<x.second<<" ";
                    t=t*x.second;
                }
                ans = (ans * factorial(totalChars, mod)) % mod;
                ans = (ans/factorial(t,mod))%mod;
             cout<<totalChars<<" "<<t;
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
};
