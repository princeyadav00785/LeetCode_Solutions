// https://leetcode.com/problems/reverse-integer

class Solution {
public:
    int reverse(int x) {
       long long  int a=0;
        if(x<0){x=abs(x);
               a=1;}
        long long int digit=0,ans=0;
        while(x>0){
        digit = x%10;
            ans = ans*10+digit;
            x=x/10;
        }
        if(abs(ans) > INT_MAX)
                return 0;
        if(a==0){return ans;}else return -1*ans;
    }
};