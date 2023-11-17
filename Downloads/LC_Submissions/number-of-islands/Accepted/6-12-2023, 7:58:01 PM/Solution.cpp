// https://leetcode.com/problems/number-of-islands

class Solution {
public:
    void dfs(vector<vector<bool>>& vis, vector<vector<char>>& grid, int row, int col) {
        
                if (row < 0 || col < 0 || row >grid.size()-1 || col >grid[0].size()-1 || vis[row][col] || grid[row][col] == '0') {
              return ;
                
        }
        vis[row][col] = true;
         dfs(vis,grid,row+1,col);
        dfs(vis,grid,row,col+1);
        dfs(vis,grid,row,col-1);
        dfs(vis,grid,row-1,col);
    }

    int numIslands(vector<vector<char>>& grid) {
        int cnt = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid[i][j] == '1') {
                    cnt++;
                    dfs(vis, grid, i, j);
                }
            }
        }
        return cnt;
    }
};
