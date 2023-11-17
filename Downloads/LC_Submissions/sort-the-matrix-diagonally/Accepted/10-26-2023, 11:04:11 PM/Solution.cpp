// https://leetcode.com/problems/sort-the-matrix-diagonally

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& v) {
        int n= v.size(),m=v[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mp[i-j].push_back(v[i][j]);
            }
        }
        for(auto x:mp){
            vector<int>temp;
            temp=x.second;
            sort(temp.begin(),temp.end(),greater<int>());
            mp[x.first]=temp;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j]= mp[i-j].back();
                mp[i-j].pop_back();
            }
        }
        return ans;
    }
};