// https://leetcode.com/problems/subarray-sum-equals-k

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
             sum+=nums[i];
            if(sum==k){cnt++;sum=0;
                       if(nums[i]!=k)
                       sum+=nums[i];
                      }
            if(sum>k){sum=0; sum+=nums[i];}
           
        }
        if(sum==k)cnt++;
        return cnt;
    }
};