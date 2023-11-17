// https://leetcode.com/problems/count-the-number-of-fair-pairs

class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long ans = 0;
        auto beg = nums.begin(), end = nums.end();
        sort(beg, end);
        for(int i = 0; i < nums.size()-1; ++i){
            ans += upper_bound(beg , end, upper - nums[i]) - lower_bound(beg , end, lower - nums[i]);
        }
        return ans;
    }
};
// 0 1 4 4 5 7 
 // [0,1,7,4,4,5], lower = 3, upper = 6