// https://leetcode.com/problems/merge-similar-items

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& a, vector<vector<int>>& b) {
        map<int,int>mp1;
        map<int,int>mp2;
        for(int i=0;i<a.size();i++){
            mp1[a[i][0]]=a[i][1];
        }
         for(int i=0;i<b.size();i++){
            mp2[b[i][0]]=b[i][1];
        }
        set<pair<int,int>>s;
        for(int i=0;i<a.size();i++){
            s.insert({a[i][0], mp1[a[i][0]]+mp2[a[i][0]]});
        }
          for(int i=0;i<b.size();i++){
            s.insert({b[i][0], mp1[b[i][0]]+mp2[b[i][0]]});
        }
        vector<vector<int>>ans;
        for(auto x:s){
            vector<int> v;
            v.push_back(x.first);
            v.push_back(x.second);
            ans.push_back(v);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};