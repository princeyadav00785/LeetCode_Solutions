// https://leetcode.com/problems/length-of-the-longest-subsequence-that-sums-to-target

class Solution {
public:
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        int n = nums.size();
    unordered_map<int, int> dp;  // dp[i] represents the length of the subsequence with sum i

    dp[0] = 0;  // Initialize with an empty subsequence

    for (int num : nums) {
        for (int sum = target; sum >= num; sum--) {
            if (dp.count(sum - num)) {
                dp[sum] = max(dp[sum], dp[sum - num] + 1);
            }
        }
    }

    return dp.count(target) ? dp[target] : -1;
    }
};