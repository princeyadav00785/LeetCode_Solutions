// https://leetcode.com/problems/count-good-numbers

class Solution {
public:
    
     long long powerMod(long long int a, long long b, int mod) {
        // if(b == 0)
        //     return 1;
        // long long x = powerMod(a, b/2, mod);
        // if(b % 2 == 0)
        //     return (x * x) % mod;
        // else
        //     return (((a * x) % mod) * x) % mod;
         long long int ans=1;
         if(b==0){
             return 1;
         }
         while(b>0){          
             if(b%2==0){
                 a=1ll*((a%mod)*(a%mod))%mod;
                 b=b/2;
             }else {
                 ans= (a*ans)%mod;
                 b--;
             }
         }
         return ans;
    }
    
    int countGoodNumbers(long long n) {
        int mod = 1e9+7;
        return (powerMod(5, (n + 1) / 2, mod) * powerMod(4, n / 2, mod)) % mod;

    //    long long int mod=1e7+1;
    //     long long int ans = 1*ll(pow(5,n-n/2)%mod)*(pow(4,n/2)%mod);
    //     return ans;
        
    }
};