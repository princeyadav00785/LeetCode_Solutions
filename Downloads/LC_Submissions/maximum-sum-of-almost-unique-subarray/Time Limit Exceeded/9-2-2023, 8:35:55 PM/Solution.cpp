// https://leetcode.com/problems/maximum-sum-of-almost-unique-subarray

class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        int n = nums.size(); 
  long long  max_sum = 0; 
 
    for (int i = 0; i <= n - k; i++) { 
        vector<int> subarray(nums.begin() + i, nums.begin() + i + k); 
        unordered_set<int> distinct_elements(subarray.begin(), subarray.end()); 
 
        if (distinct_elements.size() >= m) { 
            long long subarray_sum = 0; 
            for (int num : subarray) { 
                subarray_sum += num; 
            } 
            max_sum = max(max_sum, subarray_sum); 
        } 
    } 
        return max_sum;
    }
};