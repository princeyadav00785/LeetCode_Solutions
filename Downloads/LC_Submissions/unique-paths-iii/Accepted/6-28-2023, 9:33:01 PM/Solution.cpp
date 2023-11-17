// https://leetcode.com/problems/unique-paths-iii

class Solution {    
    int f=0;
    int solve(int x, int y, int endx, int endy,vector<vector<int>>& a, int n, int m,vector<vector<int>>&vis,int cnt,string s){
        if(x>=0 && y>=0 && x<n && y<m && a[x][y]==-1){
            return 0;
        }
        if(x>=n || y>=m || x<0 || y<0){
            return 0;
        } 
     if(x==endx && y==endy && cnt!=0){
         if(f==1){
         }
            return 0;
        }
        if(x==endx && y==endy && cnt==0){
            return 1;
        }
        if(vis[x][y]==1){
            return 0;
        }
        vis[x][y]=1;
        int l=0,r=0,u=0,d=0;
        if(x+1<n){
            d=solve(x+1, y, endx, endy,a, n, m,vis,cnt-1,s+'D');
        }
        if(y+1<m){
        r=solve(x, y+1, endx, endy,a, n, m,vis,cnt-1,s+'R');
        }
        if(x-1>=0){
            u=solve(x-1, y, endx, endy,a, n, m,vis,cnt-1,s+'U');
        }
        if(y-1>=0){
            l=solve(x, y-1, endx, endy,a, n, m,vis,cnt-1,s+'L');
        }
        vis[x][y]=0;
        return l+r+u+d;
    }
    
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int sx=0, sy=0, ex=0, ey=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1){
                    sx = i;
                    sy = j;
                }
                if(grid[i][j] == 2){
                    ex = i;
                    ey = j;
                }
                if(grid[i][j]==0){
                    cnt++;
                }

            }
        }
        vector<vector<int>>vis(n,vector<int>(m,0));
        int ans= solve(sx,sy,ex,ey,grid,n,m,vis,cnt+1,"");
        return ans;
    }
};