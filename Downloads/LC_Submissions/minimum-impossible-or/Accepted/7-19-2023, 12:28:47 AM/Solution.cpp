// https://leetcode.com/problems/minimum-impossible-or

class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int ans = 1;
        while(s.find(ans) != s.end()){
            ans = ans * 2;
        }
        return ans;
    }
};