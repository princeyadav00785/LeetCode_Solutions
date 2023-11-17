// https://leetcode.com/problems/contains-duplicate-ii

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,pair<int,int>>mp;
        int a=0,ans=0;
        for(int i=0;i<nums.size();i++){
              if(mp.find(nums[i])!=mp.end()){
                 
                 a= mp[nums[i]].second-i;
                   // cout<<i-mp[nums[i]].second<<endl;
              }
            mp[nums[i]].first++;
         mp[nums[i]].second=i;
            ans = min(ans,a);
        }
        for(auto x:mp){
            // cout<<x.first<<"->" <<"fre"<<" "<<x.second.first<<" "<<"index"<<" "<<x.second.second<<endl;
        }
        // cout<<ans;
        if(abs(ans)<=k){return true;}else return false;
    }
};