// https://leetcode.com/problems/number-of-provinces

class Solution {
public:
    void dfs(vector<vector<int>>&v,vector<vector<int>>&vis,int i,int j){
        int n = v.size();
       
        if(i<0||j<0||i>n-1||j>n-1||vis[i][j]==1)return ;
         int x = v[i][j];
        if(x==0)return ;
        vis[i][j]=1;
        dfs(v,vis,i+1,j);
        dfs(v,vis,i-1,j);
        dfs(v,vis,i,j+1);
        dfs(v,vis,i,j-1);
    }
    
    int findCircleNum(vector<vector<int>>& v) {
        int n=  v.size(),cnt=0;
        vector<vector<int>>vis(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j]&&v[i][j]==1){
                    cnt++;
                    dfs(v,vis,i,j);
                }
            }
        }
        return cnt;
        
    }
};


//  2 1 0
//  1 x 0
//  0 0 2

