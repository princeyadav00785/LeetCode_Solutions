// https://leetcode.com/problems/minimum-sum-of-mountain-triplets-i

class Solution {
public:
    int minimumSum(vector<int>& nums) {
        
        int sum=INT_MAX,n=nums.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    int l=0;
                    if(nums[i] < nums[j] and nums[k] < nums[j]){
                        l=nums[i]+nums[j]+nums[k];
                        sum=min(sum,l);
                    }
                }
            }
        }
        if(sum==INT_MAX)return -1;
        return sum;
    }
};