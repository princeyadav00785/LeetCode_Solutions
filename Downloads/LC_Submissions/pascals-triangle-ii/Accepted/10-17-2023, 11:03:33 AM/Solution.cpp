// https://leetcode.com/problems/pascals-triangle-ii

class Solution {
public:

    vector<int> getRow(int n) {
        vector<vector<int>>ans;
        vector<int>v;
        for(int i=0;i<n+1;i++){
            v.resize(i+1);
            v[0]=1,v[i]=1;
            for(int j=1;j<i;j++){
                v[j]=ans[i-1][j-1]+ans[i-1][j];
            }
            ans.push_back(v);
        }
        return ans[n];
         
    
        
    }
};