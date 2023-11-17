// https://leetcode.com/problems/total-distance-traveled

class Solution {
public:
    int distanceTraveled(int a, int b) {
        long long ans=0;
        ans = a*10+min(a/5,b)*10;
        return ans;
    }
};