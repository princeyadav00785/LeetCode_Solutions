// https://leetcode.com/problems/01-matrix

class Solution {
public:    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
                 int m = mat.size();
        int n= mat[0].size();
         queue<pair<pair<int,int>,int>>q;
     vector<vector<int>>ans(m,vector<int>(n,0));
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
             if(mat[i][j]==0){
               q.push({{i,j},0});
                 vis[i][j]=1;
                }
            }
        }
        int delrow[] = {-1, 0, +1, 0}; 
	    int delcol[] = {0, +1, 0, -1}; 
        while(!q.empty()){
             int row = q.front().first.first; 
	        int col = q.front().first.second; 
	        int steps = q.front().second; 
	        q.pop(); 
	        ans[row][col] = steps; 
              for(int i = 0;i<4;i++) {
	            int nrow = row + delrow[i]; 
	            int ncol = col + delcol[i]; 
	            // check for valid unvisited cell
	            if(nrow >= 0 && nrow < m && ncol >= 0 && ncol < n
	            && vis[nrow][ncol] == 0) {
	                vis[nrow][ncol] = 1; 
	                q.push({{nrow, ncol}, steps+1});  
	            }
	        }
        }
        
        
       return ans;
    }
};