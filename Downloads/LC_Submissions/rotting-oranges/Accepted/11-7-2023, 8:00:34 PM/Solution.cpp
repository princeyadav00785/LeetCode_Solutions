// https://leetcode.com/problems/rotting-oranges

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int cnt = 0;
        vector<vector<int>> vis(grid.size(), vector<int>(grid[0].size(), 0));
        queue<pair<int, int>> q;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (!vis[i][j] && grid[i][j] == 2) {
                    q.push({i, j});
                }
            }
        }

        while (!q.empty()) { // Change while(q.empty()) to while(!q.empty())
            cnt++;
            int n = q.size();

            for (int x = 0; x < n; x++) {
                int a = q.front().first;
                int b = q.front().second;
                q.pop();
                vis[a][b] = 1;

                int dx[] = {-1, 0, 1, 0};
                int dy[] = {0, 1, 0, -1};

                for (int dir = 0; dir < 4; dir++) {
                    int na = a + dx[dir];
                    int nb = b + dy[dir];

                    if (na >= 0 && na < grid.size() && nb >= 0 && nb < grid[0].size()) {
                        if (!vis[na][nb] && grid[na][nb] == 1) {
                            q.push({na, nb});
                            vis[na][nb] = 1;
                        }
                    }
                }
            }
        }

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (!vis[i][j] && grid[i][j] == 1) {
                    return -1;
                }
            }
        }

        return cnt > 0 ? cnt - 1 : 0;
    }
};
