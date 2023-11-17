// https://leetcode.com/problems/total-distance-traveled

class Solution {
public:
    int distanceTraveled(int a, int b) {
        long long ans=0;int c=0;
        if(a%5+b>=5){c=1;}
        ans = a*10+min((a/5+(c)),b)*10;
        return ans;
    }
};