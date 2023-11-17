// https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-ii

class Solution {
public:
    const int MOD = 1000000007;
    int sumCounts(vector<int>& nums) {
 int n = nums.size();
    long long result = 0;

    for (int left = 0; left < n; ++left) {
        unordered_set<int> distinctValues;
        for (int right = left; right < n; ++right) {
            if (distinctValues.count(nums[right]) == 0) {
                distinctValues.insert(nums[right]);
            }
            result = (result + distinctValues.size() * distinctValues.size()) % MOD;
        }
    }

    return static_cast<int>(result);

    }
};