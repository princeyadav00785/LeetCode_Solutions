// https://leetcode.com/problems/maximum-total-importance-of-roads

class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
     vector<int> adj[n];
for (int i = 0; i < roads.size(); i++) {
    adj[roads[i][0]].push_back(roads[i][1]);
    adj[roads[i][1]].push_back(roads[i][0]);
}

        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            int a=i;
            int b=adj[a].size();
            v.push_back({b,a});
        }
        sort(v.begin(),v.end());
        map<int,int>mp;
        for(int i=0;i<v.size();i++){
            mp[v[i].second]=i+1;
        }
        
        long long ans=0;
        for(int i=0;i<roads.size();i++){
            ans+=mp[roads[i][0]]+mp[roads[i][1]];
        }
        return ans;
    }
};