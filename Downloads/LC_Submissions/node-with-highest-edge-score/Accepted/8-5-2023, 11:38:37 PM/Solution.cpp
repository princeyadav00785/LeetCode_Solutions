// https://leetcode.com/problems/node-with-highest-edge-score

class Solution {
public:
    map<int,long long >mp;
    int edgeScore(vector<int>& edges) {
        for(int i=0;i<edges.size();i++){
            mp[edges[i]]+=i;
        }
        long long  mxm=0;
        for(auto x:mp){
            if(x.second>mxm)mxm=x.second;
        }
        int ans=INT_MAX;
        for(auto x:mp){
            if(x.second==mxm)
                {if(x.first<ans)ans=x.first;}
        }
        return ans;
    }
};