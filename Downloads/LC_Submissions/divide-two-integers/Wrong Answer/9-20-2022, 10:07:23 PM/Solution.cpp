// https://leetcode.com/problems/divide-two-integers

class Solution {
public:
    int divide(int dividend, int divisor) {
        int neg ;
        if(dividend>0 && divisor>0){
            neg =0;
        } else  if(dividend<0 && divisor<0){
            neg =0;
        }else{neg = 1;}
        
        dividend = abs(dividend);
        divisor = abs(divisor);
        int i= 0;
        while(i*divisor<=dividend){
            i++;
        }
        
        if(neg ==1){return -1*(i-1);}else{return i-1;}
    }
};