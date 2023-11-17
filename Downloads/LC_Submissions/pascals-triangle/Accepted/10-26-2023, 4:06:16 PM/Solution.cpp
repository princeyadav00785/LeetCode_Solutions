// https://leetcode.com/problems/pascals-triangle

class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        vector<int>v;
for(int i=0;i<n;i++){
    v.resize(i+1);
    v[0]=v[i]=1;
    for(int j=1;j<i;j++){
        v[j]=ans[i-1][j-1]+ans[i-1][j];
    }
    ans.push_back(v);
}
        return ans;
    }
};



// 00
// 10 11
//   i=1   
// 20 21 22
    