// https://leetcode.com/problems/count-subarrays-with-score-less-than-k

class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
    long long ans = 0;
        int i = 0,j=0,n = nums.size();
        long long sum = 0;
        while(i<nums.size()){
            while(j<n and (sum+nums[j])*(j-i+1)<k){
                sum = sum + nums[j];
                j++;
            }
             ans = ans + (j-i);
             sum = sum -nums[i];
             cout<<ans<<" ";
             i++;
        }
        return ans;
        
    }
};


