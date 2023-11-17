// https://leetcode.com/problems/powx-n

class Solution {
public:
    double myPow(double x, int n) {
              double ans=1.0;
          long p = abs(long(n));
        while(p>0){
            if(p%2==1){
                ans = ans*x;
                p--;
            }
            else {
                x= x*x;
                p=p/2;
            }
            
        }
        if(n<0){
            ans = 1.0/ans;
        }
       
       return ans;
    }
};