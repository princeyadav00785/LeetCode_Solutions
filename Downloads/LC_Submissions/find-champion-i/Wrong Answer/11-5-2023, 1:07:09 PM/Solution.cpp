// https://leetcode.com/problems/find-champion-i

class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n= grid.size();
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<grid[0].size();j++){
                if(i!=j){
                    if(grid[i][j]){
                        v[i]+=v[j]+1;
                    }
                }
            }
        }
        int mxm=-1,ans=0;
        
        for(int i=0;i<v.size();i++){
            // cout<<v[i]<<" ";
            if(v[i]>mxm){mxm=v[i];ans=i;}
        }
        // cout<<endl;
        return ans;
    }
};