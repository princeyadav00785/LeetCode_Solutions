// https://leetcode.com/problems/sqrtx

class Solution {
public:
    
    int fxn(int n){
        int ans =-1;
        int l=1,h=n;
        while(l<=h){
            int mid = (l+h)/2;
            if(mid*mid>n){
            h=mid-1;}else if(mid*mid==n){
            ans =mid;
                break;
            }else {l=mid+1;ans =mid;}
        }
        
        return ans;
    }
    int mySqrt(int x) {
        int ans = fxn(x);
        return ans;
    }
};