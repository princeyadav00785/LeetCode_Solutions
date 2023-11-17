// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& nums, int k) {
        vector<bool>ans;
        int mxm=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mxm){
                mxm=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if((nums[i]+k)>=mxm){ans.push_back(true);}else ans.push_back(false);
        }
        return ans;
    }
};