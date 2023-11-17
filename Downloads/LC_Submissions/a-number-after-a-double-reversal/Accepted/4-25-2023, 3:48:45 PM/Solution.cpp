// https://leetcode.com/problems/a-number-after-a-double-reversal

class Solution {
public:
    bool isSameAfterReversals(int k) {
        if(k==0){return true;}
        if(k%10==0){return false ;}
        return true;
    }
};