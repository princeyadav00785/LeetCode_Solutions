// https://leetcode.com/problems/intersection-of-multiple-arrays

class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int> mp;
        for(auto x:nums){
            for(int i=0;i<x.size();i++){
                mp[x[i]]++;
            }
        }
    vector<int>ans;
        for(auto x:mp){
            if(x.second==nums.size()){
                ans.push_back(x.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};