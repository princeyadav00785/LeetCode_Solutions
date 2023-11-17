// https://leetcode.com/problems/sum-of-subarray-minimums

class Solution {
public:
    int sumSubarrayMins(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        for(int i=0;i<n;i++){
             vector<int>v;
               int mxm=INT_MIN,mnm=INT_MAX;
            for(int j=i;j<n;j++){
                v.push_back(nums[j]);
                if(nums[j]>mxm)mxm=nums[j];
                if(nums[j]<mnm)mnm=nums[j];
            if(v.size())
            ans+=mnm;
            }
        }
        
        return ans; 
    }
};