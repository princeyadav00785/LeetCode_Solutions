// https://leetcode.com/problems/pascals-triangle-ii

class Solution {
public:
    vector<int> getRow(int numRows) {
//         vector<vector<int>>ans;
//         for(int i=0;i<n;i++){
//              vector<int> v;
//             int size= i+1;
//             for(int j=0;j<i+1;j++){
//                 v.resize(size);
//                 v[0][i]=v[i][i]=1;
//                 if(j>1){
//                     v[i][j]=v[i-1][j]+v[i][j-1];
//                 }
               
//             }
//             ans.push_back(v);
//         }
//         return ans[ans.size()-1];
//            vector<vector<int>> ans(numRows);
        
//         for(int i=0;i<numRows;i++){
//             ans[i].resize(i+1);
//             ans[i][0]=ans[i][i]=1;
//             for(int j=1;j<i;j++){
//                 ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
//             }
//         }
//         return ans.back();
                vector<vector<int>> dp;

        // Loop over each row (i) from 0 to numRows-1
        for (int i = 0; i<=numRows; i++) {
            // Create a new row vector with i+1 elements, and initialize all elements to 1
            vector<int> row(i + 1, 1);

            // Loop over each middle element (j) in the row
            for (int j = 1; j < i; j++) {
                // Set the middle element to the sum of the two elements above it in the previous row
                row[j] = dp[i - 1][j - 1] + dp[i - 1][j];
            }

            // Add the completed row vector to the dp vector
            dp.push_back(row);
        }

        // Return the completed dp vector containing all rows
        return dp.back();

      
    }
};