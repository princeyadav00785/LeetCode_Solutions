// https://leetcode.com/problems/reverse-integer

class Solution {
public:
//     n= 152
//     d = 152% 10 ;
//     ans = 0+ 2;
//     n = 152 - 2;
//     15 = 150/10;
    int reverse(int n) {
        int d =0;
        double ans =0;
        int neg = 0;
        if(n <0){
            neg = 1;
            n= abs(n);
        }
        while(n>0){
            d = n%10;
            ans = ans *10 + d;
            n = n -d;
            n = n/10;
        }
        if(neg ==1){
            ans = ans*-1;
        }
        if(ans>INT_MAX){ans = 0;}else if(ans < INT_MIN){ans = 0;}
        return ans;
    }
};