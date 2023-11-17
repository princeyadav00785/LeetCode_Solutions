// https://leetcode.com/problems/maximum-sum-with-exactly-k-elements

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        long long int ans=0;
        sort(nums.begin(),nums.end());
        int sum =nums[nums.size()-1];
        // for(int i=0;i<k;i++){
        //     sum+=
        // }
        ans= k*sum+ (k*(k+1))/2-k;
        return ans;
    }
};