// https://leetcode.com/problems/powx-n

class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
       
        // int p= abs(n);
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
        
        
        //  if(n==0) return 1;
        // long p = abs(long(n));
        // double ans = 1.0;
        // while(p>0){
        //     if(p%2 == 1){
        //         ans = ans*x;
        //     }
        //     x = x*x;
        //     p=p/2;
        // }
        // if(n<0){
        //     return 1.0/ans;
        // }
        // return ans;
    }
};