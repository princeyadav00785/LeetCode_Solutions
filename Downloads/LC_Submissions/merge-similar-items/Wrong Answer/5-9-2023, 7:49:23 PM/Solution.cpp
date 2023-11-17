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
        vector<vector<int>>ans;
        int n= max(a.size(),b.size());
       if(a.size()>=b.size()){
            for(int i=0;i<n;i++){
            vector<int>v;
            v.push_back(a[i][0]);
                v.push_back(mp1[a[i][0]]+mp2[a[i][0]]);
                ans.push_back(v);
        }
       }else {
            for(int i=0;i<n;i++){
            vector<int>v;
            v.push_back(b[i][0]);
                v.push_back(mp1[b[i][0]]+mp2[b[i][0]]);
                ans.push_back(v);
       }
           
    }
        sort(ans.begin(),ans.end());
        return ans;
    }
};