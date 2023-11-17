// https://leetcode.com/problems/equal-row-and-column-pairs

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
          if(grid.size()==1)return 0;
        
        set<vector<int>>s;
        for(int i=0;i<grid.size();i++){
        
            s.insert({grid[i]});
             // s.insert({grid[0][i]}); 
        }
        for(int i=0;i<grid.size();i++){
            vector<int>v;
            for(int j=0;j<grid.size();j++){
                v.push_back(grid[j][i]);
            }
            s.insert({v});
        }
      
        int ans= 2*grid.size()-s.size();
        if(s.size()==1){return grid.size()*grid.size();}else return ans;
    }
};
// graph -5
// sde day 5
//  projicet