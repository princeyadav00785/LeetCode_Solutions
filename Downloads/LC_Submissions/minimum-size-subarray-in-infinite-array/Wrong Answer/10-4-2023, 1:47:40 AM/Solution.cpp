// https://leetcode.com/problems/minimum-size-subarray-in-infinite-array

class Solution {
public:
    int minSizeSubarray(vector<int>& nums, int k) {
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        sum= k%sum;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]);
        }
        int ans=0, index=0;
        return 0;
    }
};