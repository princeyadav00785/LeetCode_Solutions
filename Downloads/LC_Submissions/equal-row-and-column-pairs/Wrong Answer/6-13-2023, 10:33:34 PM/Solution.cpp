// https://leetcode.com/problems/equal-row-and-column-pairs

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
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
        
        return 2*grid.size()-s.size();
    }
};
// graph -5
// sde day 5
//  projicet