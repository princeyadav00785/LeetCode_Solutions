// https://leetcode.com/problems/divide-two-integers

class Solution {
public:
    int divide(int dividend, int divisor) {
       long long int ans =0;
       long long int a = dividend;
       long long int b= divisor;
        dividend = abs(dividend);
        divisor=abs(divisor);
        for(long long int i=1;i<dividend;i++ ){
            if(i*divisor<=dividend&&(i+1)*divisor>=dividend){
                ans = i;
            }
        }
        if(ans>(pow(2,31)-1)){
            ans = 2^31-1;
        } if(ans<-(pow(2,31))){
            ans = -2^31;
        }
        if(b==1){return a;}
        if(b==-1){return -a;}
        if(a<0&&b<0){
        return ans;}
        else if(a>0&&b<0){
            return -1*ans;
        } else if(a<0&&b>0){
            return -1*ans;
        }else return ans;
    }
};