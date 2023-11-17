// https://leetcode.com/problems/count-primes

class Solution {
public:
    int countPrimes(int n) {
      vector<bool>prime(n+1,true);
        for(int i=2;i*i<=n;i++){
            if(prime[i]){
                for(int j=i*i;j<=n;j+=i){
                    prime[j]=false;
                }
            }
        }
        int cnt=0;
        for(int i=2;i<n;i++){
            if(prime[i])cnt++;
        }
        return cnt;
    }
};