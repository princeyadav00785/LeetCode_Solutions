// https://leetcode.com/problems/find-the-value-of-the-partition

class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]<ans){
                ans=nums[i]-nums[i-1];
            }
        }
        return ans;
    }
};