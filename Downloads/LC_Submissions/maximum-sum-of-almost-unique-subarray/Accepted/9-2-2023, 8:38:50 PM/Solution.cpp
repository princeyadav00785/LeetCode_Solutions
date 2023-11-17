// https://leetcode.com/problems/maximum-sum-of-almost-unique-subarray

class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
          unordered_map<int,int> mp;
        long long ans=0;
        int i=0,j=0;
        int n=nums.size();
        long long temp=0;
        while(j<n)
        {
            temp+=nums[j];
            mp[nums[j]]++;
            while(j-i+1>k)
                 {
                mp[nums[i]]--;
                temp-=nums[i];
                if(mp[nums[i]]==0)mp.erase(nums[i]);
                i++;
            }
            if(j-i+1==k)
            {
                if(mp.size()>=m)
                    ans=max(ans,temp);
            }
            j++;
        }
        return ans;
    }
};