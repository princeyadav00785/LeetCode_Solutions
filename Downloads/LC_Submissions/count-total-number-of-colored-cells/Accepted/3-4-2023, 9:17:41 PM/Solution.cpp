// https://leetcode.com/problems/count-total-number-of-colored-cells

class Solution {
public:
    long long coloredCells(int n) {
        long long int ans =0;
        int m =n-1;
       long long  int a=4;
        int b=1;
        ans+=b;
        while(m--){
            ans += a;
            a+=4;
        }
        return ans;
    }
};