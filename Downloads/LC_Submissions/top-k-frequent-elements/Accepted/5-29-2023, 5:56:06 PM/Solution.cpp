// https://leetcode.com/problems/top-k-frequent-elements

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
//         1-3
//         2-2
//         3-1
        vector<pair<int,int>>v;
        for(auto x:mp){
            v.push_back({x.second ,x.first});
        }
        sort(v.begin(),v.end());
     // for(int i=0;i<v.size();i++){
     //     cout<<v[i].first<<"->"<<" " <<v[i].second<<" ";
     // }
        int i=v.size()-1;
        while(k--){
            // cout<<i<<" ";
            ans.push_back(v[i].second);
            i--;
                
        }
        return ans;
    }
};