// https://leetcode.com/problems/rotate-function

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum=0,f0=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            f0+=i*nums[i];
        }
        int ans = f0;

  
        for(int i=nums.size()-1;i>0;i--){
            f0=f0+sum-nums.size()*nums[i];
            ans=max(ans,f0);
        }
       return ans;
    }
};