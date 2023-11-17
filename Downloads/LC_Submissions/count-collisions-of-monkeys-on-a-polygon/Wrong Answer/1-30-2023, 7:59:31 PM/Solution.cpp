// https://leetcode.com/problems/count-collisions-of-monkeys-on-a-polygon

class Solution {
public:
    int monkeyMove(int n) {
       long long int ans = pow(2,n)-2;
        return ans;
    }
};