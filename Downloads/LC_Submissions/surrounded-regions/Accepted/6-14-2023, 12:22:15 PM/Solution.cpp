// https://leetcode.com/problems/surrounded-regions

class Solution {
public:
    void dfs(vector<vector<char>>& board, vector<vector<int>>& vis, int i, int j) {
        int m = board.size();
        int n = board[0].size();
        if (i < 0 || j < 0 || j > n - 1 || i > m - 1 || vis[i][j] || board[i][j] != 'O')
            return;
        vis[i][j] = 1;

        dfs(board, vis, i + 1, j);
        dfs(board, vis, i - 1, j);
        dfs(board, vis, i, j + 1);
        dfs(board, vis, i, j - 1);
    }

    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> vis(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || j == 0 || j == n - 1 || i == m - 1) {
                    if (!vis[i][j] && board[i][j] == 'O') {
                        dfs(board, vis, i, j);
                        vis[i][j] = 1;
                    }
                }
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!vis[i][j] && board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
            }
        }
    }
};
