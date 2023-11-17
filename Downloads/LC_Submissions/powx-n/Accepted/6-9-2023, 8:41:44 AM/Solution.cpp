// https://leetcode.com/problems/powx-n

class Solution {
public:
    double myPow(double x, int n) {
    //      double ans=1,a=1;
    //     if(n<0){
    //         a=-1;
    //     }
    // int b=abs(n);
    //     while(b){
    //         if(b%2!=0){
    //             ans=ans*x;
    //             b--;
    //         }
    //         else {x=x*x;
    //         b=b/2;}
    //     }
    //     if(a==1)
    //  return ans;else return 1.0/ans;   
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
    }
};