// https://leetcode.com/problems/flood-fill

class Solution {
public:
    void dfs (vector<vector<int>> grid , vector<vector<int>>& ans,vector<vector<int>>& vis,int row,int col,int c,int scol){
       if (row < 0 || col < 0 || row >grid.size()-1 || col >grid[0].size()-1 || vis[row][col] || grid[row][col] !=scol) {
              return ;}
        int i=row,j=col;
        vis[i][j]=1;
        ans[i][j]=c;
                 dfs(grid,ans,vis,row+1,col,c,scol);
        dfs(grid,ans,vis,row,col+1,c,scol);
        dfs(grid,ans,vis,row,col-1,c,scol);
        dfs(grid,ans,vis,row-1,col,c,scol);
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size(),n=image[0].size();
        vector<vector<int>>ans(image.begin(),image.end());
        vector<vector<int>>vis(m,vector<int>(n,0));
        int scol=image[sr][sc];
        dfs(image,ans,vis,sr,sc,color,scol);
        return ans;
    }
};