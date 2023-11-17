// https://leetcode.com/problems/count-good-numbers

class Solution {
public:
    int mod= 1e9+7;
    
    int fxn(int a,int n){
       long long  int ans=1;
        for(int i=0;i<n;i++){
            ans= (ans*a)%mod;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        int o= n/2;
        int e=n-o;
        int a= fxn(5,e);
        int b= fxn(4,o);
        long long   ans = (long long )a*b%mod;
        return ans;
    }
};