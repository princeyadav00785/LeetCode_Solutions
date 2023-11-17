// https://leetcode.com/problems/powx-n

class Solution {
public:
    double myPow(double x, int n) {
         double ans=1,a=1;
        if(n<0){
            a=-1;
        }
    int b=abs(n);
        while(b){
            if(b%2!=0){
                ans=ans*x;
                b--;
            }
            else {x=x*x;
            b=b/2;}
        }
        if(a==1)
     return ans;else return 1.0/ans;   
    }
};