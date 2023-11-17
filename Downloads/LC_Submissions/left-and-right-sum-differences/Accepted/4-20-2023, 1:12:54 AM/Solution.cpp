// https://leetcode.com/problems/left-and-right-sum-differences

class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int>ans;
        int r=0,l=0;
        for(int i=0;i<nums.size();i++){
            r +=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            r -=nums[i];
            ans.push_back(abs(r-l));
            l+=nums[i];
        }
        return ans;
    }
};