// https://leetcode.com/problems/powx-n

class Solution {
public:
    double myPow(double x, int n) {
       double ans =1;
       if(n>0){ for(int i=0;i<n;i++ ){
            ans *=x;
        }}else {
            for(int i=0;i<abs(n);i++ ){
            ans *=1/x;
        }
        }
        return ans;
    }
};