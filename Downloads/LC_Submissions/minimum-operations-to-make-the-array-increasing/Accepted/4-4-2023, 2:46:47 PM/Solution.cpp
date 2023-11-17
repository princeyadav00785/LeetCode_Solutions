// https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int max= 0,ans=0;
        if(nums.size()==1){return 0;}
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
            }else ans+= max-nums[i];
            
            max=max+1;
        }
        return ans;
    }
};