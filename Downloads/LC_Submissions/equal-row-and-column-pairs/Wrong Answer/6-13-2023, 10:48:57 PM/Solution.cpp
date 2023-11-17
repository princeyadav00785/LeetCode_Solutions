// https://leetcode.com/problems/equal-row-and-column-pairs

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
          if(grid.size()==1)return 0;
         vector<vector<int>>a;
        vector<vector<int>>b;
        for(int i=0;i<grid.size();i++){
            vector<int>v;
            for(int j=0;j<grid.size();j++){
                v.push_back(grid[j][i]);
            }
            a.push_back({v});
        }
        
         for(int i=0;i<grid.size();i++){
            vector<int>v;
            for(int j=0;j<grid.size();j++){
                v.push_back(grid[i][j]);
            }
            b.push_back({v});
        }
      int cnt=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(a[i]==b[j]){cnt++;}
            }
        }
return cnt;
    }
};
// graph -5
// sde day 5
//  projicet