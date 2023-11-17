// https://leetcode.com/problems/finding-the-users-active-minutes

class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        
     set<int> adj[k];
        for(auto x:logs){
          adj[x[0]].insert(x[1]);  
        }
        vector<int> ans;
        for(auto x:adj){
            ans.push_back(x.size());
        }
        map<int,int>mp2;
        for(auto x:ans){
            mp2[x]++;
        }
        vector<int>a;
        for(int i=1;i<=k;i++){
            a.push_back(mp2[i]);
        }
        
        return a;
    }
};