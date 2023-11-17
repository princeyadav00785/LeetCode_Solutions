// https://leetcode.com/problems/relocate-marbles

class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& a, vector<int>& b) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<a.size();i++){
           if(a[i]!=b[i]){ mp[b[i]]+=mp[a[i]];
            mp[a[i]]=0;}
        }
        vector<int>ans;
        for(auto x:mp){
            if(x.second!=0)
            ans.push_back(x.first);
        }
        return ans;
    }
};

// [1,6,7,8]
// [1,7,2]
// [2,9,5]