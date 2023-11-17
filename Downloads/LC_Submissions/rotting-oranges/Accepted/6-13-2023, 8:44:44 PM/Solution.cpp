// https://leetcode.com/problems/rotting-oranges

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
     int n=grid.size();
        int m = grid[0].size();
        int tm=0;
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
            }
        }
        int row[]= {-1,0,1,0};
        int col[]={0,1,0,-1};
        
        while(!q.empty()){
            int r= q.front().first.first;
            int c= q.front().first.second;
            int t= q.front().second;
            tm=max(t,tm);
            q.pop();
            for(int i=0;i<4;i++){
                int x= r+row[i];
                int y= c+col[i];
                if(x>=0&&y>=0&&x<n&&y<m&&grid[x][y]==1&&vis[x][y]!=2){
                    q.push({{x,y},t+1});
                    vis[x][y]=2;
                }
                
            }
            
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]!=2&&grid[i][j]==1){
                    return -1;
                }
            }
        }
     return tm;   
    }
};