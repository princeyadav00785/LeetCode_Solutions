// https://leetcode.com/problems/pascals-triangle

class Solution {
public:
    vector<vector<int>> generate(int k) {
        vector<vector<int>>ans;
        vector<int>v;
        for(int i=0;i<k;i++){
            v.resize(i+1);
            v[0]=v[i]=1;
            for(int j=1;j<i;j++){
            
                v[j]=ans[i-1][j-1]+ans[i-1][j];
            }
             ans.push_back(v);
        }
        return ans;
    
        
//         vector<vector<int>>v(k);
        
//         for(int i=0;i<k;i++){
//             v[i].resize(i+1);
//               v[i][0]=v[i][i]=1;
//             for(int j=1;j<i;j++){
//                 v[i][j]=v[i-1][j-1]+v[i-1][j];
//             }
//         }
//         return v;
         
    }
};