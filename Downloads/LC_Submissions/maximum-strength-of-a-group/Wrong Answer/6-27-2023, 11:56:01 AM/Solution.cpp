// https://leetcode.com/problems/maximum-strength-of-a-group

class Solution {
public:
    long long fxn(vector<int>& nums, int n, int ind, long long curProduct) {
        if (ind == n) {
            return curProduct;
        }
        
        if (nums[ind] == 0) {
            return 0;
        }
        
        long long take = fxn(nums, n, ind + 1, curProduct * nums[ind]);
        long long ntake = fxn(nums, n, ind + 1, curProduct);
        
        return max({take, ntake});
    }

    long long maxStrength(vector<int>& nums) {
        return fxn(nums, nums.size(), 0, 1);
    }
};
