// https://leetcode.com/problems/power-of-four

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)return false;
        for(int i=0;i*i*i*i<=n;i++){
            if(i*i*i*i==n)return true;
        }
        return false;
    }
};