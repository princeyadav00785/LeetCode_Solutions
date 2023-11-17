// https://leetcode.com/problems/intersection-of-multiple-arrays

class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> v;
         
        map<int,int> mp;
        for(int i =0; i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                mp[nums[i][j]]++;
            }
        }
        for(auto it:mp){
            if(it.second==nums.size()){
                v.push_back(it.first);
            }
        }
        return v;
    }
};