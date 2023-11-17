// https://leetcode.com/problems/contains-duplicate-ii

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,pair<int,int>>mp;
        int a=0,ans=0;
        for(int i=0;i<nums.size();i++){
              if(mp.find(nums[i])!=mp.end()){
                 a= i-mp[nums[i]].second;
              }
            mp[nums[i]].first++;
         mp[nums[i]].second=i;
            ans = min(ans,a);
        }
        if(ans<=k){return true;}else return false;
    }
};