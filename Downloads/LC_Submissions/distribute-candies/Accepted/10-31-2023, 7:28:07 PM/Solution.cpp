// https://leetcode.com/problems/distribute-candies

class Solution {
public:
    int distributeCandies(vector<int>& c) {
        int n=c.size();
        set<int>s(c.begin(),c.end());
        int m= s.size();
        return min(n/2,m);
    }
};