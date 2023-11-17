// https://leetcode.com/problems/power-of-four

class Solution {
public:
    bool isPowerOfFour(int n) {
        int pwr=0;
       
        if(n<=0){return false;}
         if(n==1){return true;}
        if(n%2!=0){
            return false;
        }
       
        while(n>1){
            n=n/2;
            pwr++;
             if(n%2!=0){
            return false;
        }
        }
        if(pwr%2==0){return true;}
        return false;
    }
};