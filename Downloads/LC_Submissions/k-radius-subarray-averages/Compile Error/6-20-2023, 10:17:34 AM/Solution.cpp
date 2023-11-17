// https://leetcode.com/problems/k-radius-subarray-averages

class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
       long long  n=nums.size();
        vector<long long int>ans(nums.size(),-1);
        long long  s=0;
        for(int i=0;i<=2*k&&i<n;i++){
            s+=nums[i];
        }
        for(int i=k;i<n-k;i++){
            ans[i]=s/(2*k+1);
          if(i-k>-1) { s-=(nums[i-k]);}
            if(i+k+1<n){s+=nums[i+k+1];}
        }
        return ans;
    }
};