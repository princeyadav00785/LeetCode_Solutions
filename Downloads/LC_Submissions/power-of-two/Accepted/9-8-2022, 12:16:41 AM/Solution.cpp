// https://leetcode.com/problems/power-of-two

class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n<=0){
          
           return false;
        }else if(n==1){
               return true;
        }else if((n& (n-1)) ==0){
               return true;
        }else    return false;
        return 0;
    }
};