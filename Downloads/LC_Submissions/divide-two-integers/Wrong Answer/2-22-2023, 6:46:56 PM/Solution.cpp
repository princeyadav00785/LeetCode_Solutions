// https://leetcode.com/problems/divide-two-integers

class Solution {
public:
    int divide(int dividend, int divisor) {
       long long int ans =0;
        for(long long int i=1;i<dividend;i++ ){
            if(i*divisor<=dividend&&(i+1)*divisor>dividend){
                ans = i;
            }
        }
        if(ans>(pow(2,31)-1)){
            ans = 2^31-1;
        } if(ans<-(pow(2,31))){
            ans = -2^31;
        }
        return ans;
    }
};