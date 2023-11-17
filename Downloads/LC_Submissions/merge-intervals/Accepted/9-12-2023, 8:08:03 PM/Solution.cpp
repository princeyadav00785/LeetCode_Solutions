// https://leetcode.com/problems/merge-intervals

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<vector<int>>ans;
        int n=v.size();
        if(v.size()<=1){return v;}
        sort(v.begin(),v.end());
        int l=v[0][0];
        int h= v[0][1];
        for(int i=1;i<v.size();i++){
        if(v[i][0]<=h){
            h=max(h,v[i][1]);
        }else {
            ans.push_back({l,h});
            l=v[i][0];
            h=v[i][1];
        }
        }
       // if(ans.size()==0){
         ans.push_back({l,h});   
       // }else  {int mxm= max(v[n-2][1],v[n-1][1]);
       //  if(ans[ans.size()-1][1]!=mxm){
       //      ans.push_back({l,h});
       //  }}
      return ans;
        
    }
};