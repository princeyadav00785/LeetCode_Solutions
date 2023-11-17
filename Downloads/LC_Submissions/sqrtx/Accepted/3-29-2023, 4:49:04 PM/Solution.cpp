// https://leetcode.com/problems/sqrtx

class Solution {
public:
    
    int fxn(int n){
       long long int ans =-1;
      long long  int l=1,h=n;
        while(l<=h){
            long long int mid = (l+h)/2;
            if(mid*mid>n){
            h=mid-1;}else if(mid*mid==n){
            ans =mid;
                break;
            }else {l=mid+1;ans =mid;}
        }
        
        return ans;
    }
    int mySqrt(int x) {
       long long int ans = fxn(x);
        if(x==0){return 0;}
        return ans;
    }
};