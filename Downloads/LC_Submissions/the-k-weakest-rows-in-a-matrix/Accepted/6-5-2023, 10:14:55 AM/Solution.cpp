// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& v, int k) {
       
        vector<pair<int,int>>a;
        vector<int>ans;
       for(int i=0;i<v.size();i++){
            int sum=0;
          for(int j=0;j<v[0].size();j++){
              sum+=v[i][j];
          } 
           a.push_back({sum,i});
       } 
        sort(a.begin(),a.end());
        for(int i=0;i<k;i++){
            ans.push_back(a[i].second);
        }
        return ans;
    }
};