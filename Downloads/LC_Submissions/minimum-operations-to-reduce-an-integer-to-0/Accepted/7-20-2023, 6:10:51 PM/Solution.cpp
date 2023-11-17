// https://leetcode.com/problems/minimum-operations-to-reduce-an-integer-to-0

class Solution {
public:
      int minOperations(int n) {
        return __builtin_popcount(n ^ (n * 3));
    }
};