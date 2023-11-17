// https://leetcode.com/problems/top-k-frequent-elements

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
      for(auto x:mp){
          if(x.second>=k){
              ans.push_back(x.first);
          }
      }
        return ans;
    }
};