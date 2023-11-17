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
         priority_queue<pair<int,int>> maxh;
for(int i=0;i<v.size();i++){
    maxh.push({a[i].first,a[i].second});
    if(maxh.size()>k){
        maxh.pop();
    }
}
        while(k--){
            ans.push_back(maxh.top().second);
            maxh.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};