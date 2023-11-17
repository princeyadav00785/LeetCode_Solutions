// https://leetcode.com/problems/keys-and-rooms

class Solution {
public:
    void dfs(int i,vector<int>&vis,vector<int>adj[]){
        if(vis[i])return ;
        vis[i]=1;
        for(auto x:adj[i]){
            if(!vis[x]){
                dfs(x,vis,adj);
            }
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
          int n= rooms.size();
        vector<int>adj[n];
        
      for(int j=0;j<rooms.size();j++){
for(int i=0;i<rooms[j].size();i++){
    adj[j].push_back(rooms[j][i]);
}
      }
        for(int i=0;i<n;i++){
            for(int j=0;j<adj[i].size();j++){
                cout<<adj[i][j];
            }
            cout<<endl;
        }
    
        vector<int>vis(n,0);
        dfs(0,vis,adj);
        for(auto x:vis){if(x==0)return false;}
        
        return true;
    }
};