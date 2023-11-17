// https://leetcode.com/problems/coloring-a-border

class Solution:
     def colorBorder(self, grid, r0, c0, color):
        seen, m, n = set(), len(grid), len(grid[0])

        def dfs(x, y):
            if (x, y) in seen: return True
            if not (0 <= x < m and 0 <= y < n and grid[x][y] == grid[r0][c0]):
                return False
            seen.add((x, y))
            if dfs(x + 1, y) + dfs(x - 1, y) + dfs(x, y + 1) + dfs(x, y - 1) < 4:
                grid[x][y] = color
            return True
        dfs(r0, c0)
        return grid   