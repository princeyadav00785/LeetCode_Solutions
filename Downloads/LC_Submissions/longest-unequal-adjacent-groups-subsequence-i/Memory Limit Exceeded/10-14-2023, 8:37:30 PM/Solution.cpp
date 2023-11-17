// https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i

class Solution {
public:
    void fxn(vector<vector<string>>&a,int n, vector<string>& w, vector<int>& g,int i,vector<string>v,int prev){
        if(i==0){
        int y= prev;
        prev= g[i];
        v.push_back(w[i]);
        fxn(a,n,w,g,i+1,v,prev);
        v.pop_back();
        prev=y;
        fxn(a,n,w,g,i+1,v,prev);
        }
        if(i>=n){
            a.push_back(v);
            return;
        }
        if(prev==g[i])fxn(a,n,w,g,i+1,v,prev);
    else{
        int y= prev;
        prev= g[i];
        v.push_back(w[i]);
        fxn(a,n,w,g,i+1,v,prev);
        v.pop_back();
        prev=y;
        fxn(a,n,w,g,i+1,v,prev);
    }
        
    }
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& w, vector<int>& g) {
        vector<vector<string>>a;
        vector<string>v;
        fxn(a,n,w,g,0,v,-1);
        
        int mxm=INT_MIN;
        for(int i=0;i<a.size();i++){
          int y=a[i].size(); 
            // cout<<y<<" ";
            if(y>mxm)mxm=y;
        }
       cout<<mxm;
             for(int i=0;i<a.size();i++){
                 vector<string>ans;
                 
              if(a[i].size()==mxm){
                 // ans=a[i];
                 // v=ans;
              for(int j=0;j<a[i].size();j++){
                  // cout<<a[i][j];
                  v.push_back(a[i][j]);
                  
              }
                  break;
              }
             }
       
        return v;
    }
};