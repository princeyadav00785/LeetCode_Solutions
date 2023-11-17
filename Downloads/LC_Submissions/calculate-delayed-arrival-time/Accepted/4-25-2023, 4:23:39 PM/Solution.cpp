// https://leetcode.com/problems/calculate-delayed-arrival-time

class Solution {
public:
    int findDelayedArrivalTime(int a, int b) {
        return (a+b)%24;
    }
};