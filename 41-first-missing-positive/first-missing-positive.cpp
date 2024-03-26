class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>(ans+1)){
                return ans+1;
            }
            else{
                ans=max(ans,nums[i]);
            }

        }
        return ans+1;
    }
};