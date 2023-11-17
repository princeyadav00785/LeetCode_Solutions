// https://leetcode.com/problems/powx-n

class Solution {
public:
    double myPow(double x, int n) {
       double ans =1;
       if(n>0){  if(n%2==0){

                     for (int i = 0; i < n/2; i++) {
                       ans *= x*x;
                     }
                   }else {
					   for (int i = 0; i < n/2; i++) {
                       ans *= x*x;
                     } 
					 ans *=x;
				   }}else {
        //     for(int i=0;i<abs(n);i++ ){
        //     ans *=1/x;
        // }

if(n%2==0){

                     for (int i = 0; i < abs(n/2); i++) {
                       ans *= 1/(x*x);
                     }
                   }else {
					   for (int i = 0; i < abs(n/2); i++) {
                       ans *= 1/(x*x);
                     } 
					 ans *=1/x;
				   }

        }
        return ans;
    }
};