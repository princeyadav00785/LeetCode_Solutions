// https://leetcode.com/problems/course-schedule-iv

class Solution {
public:
    void dfs(vector<int>adj[], stack<int>&st,int v, vector<int>&vis){
        
        vis[v]=1;
        for(auto x:adj[v]){
            if(!vis[x]){
                dfs(adj,st,x,vis);
            }
        }
        st.push(v);
    }
    
    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& v, vector<vector<int>>& q) {
        if(v.size()==0){
                 vector<bool>ans(q.size(),false);
            return ans;
        }
       vector<int> adj[n];
        for(int i=0;i<v.size();i++){
            adj[v[i][0]].push_back(v[i][1]);
        }
        vector<int>vis(n,0);
        stack<int>st;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(adj,st,i,vis);
            }
        }
        vector<int>topo;
       
        while(!st.empty()){
            int a = st.top();
            topo.push_back(a);
            st.pop();
        }
        //  for(auto x:topo){
        //     cout<<x<<" ";
        // }
        map<int,int>mp;
        for(int i=0;i<topo.size();i++){
            mp[topo[i]]=i;
        }
        vector<bool>ans;
        for(int i=0;i<q.size();i++){
            int a= q[i][0];
            int b= q[i][1];
            if(mp[a]>=mp[b]){
                ans.push_back(false);
            }else ans.push_back(true);
        }
        return ans;
    }
};