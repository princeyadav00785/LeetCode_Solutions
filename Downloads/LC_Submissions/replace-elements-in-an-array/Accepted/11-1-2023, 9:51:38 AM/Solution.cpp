// https://leetcode.com/problems/replace-elements-in-an-array

class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& o) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<o.size();i++){
            int a=o[i][0];
            int b=o[i][1];
            int ind = mp[a];
            nums[ind]=b;
            mp[b]=ind;
        }
        return nums;
    }
};