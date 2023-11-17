// https://leetcode.com/problems/powx-n

class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        
        if(n>0){
            while(n--){
                ans *=x;
            }
        }else {
            n=abs(n);
            while(n--){
                ans *=1/x;
            }
        }
       return ans;
    }
};