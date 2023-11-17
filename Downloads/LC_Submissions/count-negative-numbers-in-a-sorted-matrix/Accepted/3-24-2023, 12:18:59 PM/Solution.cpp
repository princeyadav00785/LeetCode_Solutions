// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i=0;
       int j=grid[0].size()-1;
       int count=0;
       while(i<grid.size()&&j>=0)
       {
           cout<<i<<" "<<j<<" ]"<<endl;
           if(grid[i][j]<0)
           {
               count+=(grid.size()-i);
               j--;
           }
           else if(grid[i][j]>=0)
           {
               i++;
           }

           
// 0 3 ]    4 3  2 -1
// 0 2 ]    3 2 1 -1
// 1 2 ]    1 1 -1 -2
// 2 2 ]
// 2 1 ]
// 3 1 ]
// 3 0 ]

       }
       return count;
    }
};