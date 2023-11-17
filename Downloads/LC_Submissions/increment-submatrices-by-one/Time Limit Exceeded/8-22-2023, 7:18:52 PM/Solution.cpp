// https://leetcode.com/problems/increment-submatrices-by-one

class Solution {
public:
    void fxn(vector<vector<int>>&ans,int a,int b,int c,int d){
//         1 1 2 2 
        for(int j=b;j<=d;j++){
        for(int i=a;i<=c;i++){
            ans[i][j]+=1;
        }}
        // for(int j=b;j<=d;j++){
        //     ans[a][j]+=1;
        // }
    }
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& v) {
     vector<vector<int>>ans(n,vector<int>(n,0));
        for(int i=0;i<v.size();i++){
            fxn(ans,v[i][0],v[i][1],v[i][2],v[i][3]);
        }
        return ans;
    }
};