// https://leetcode.com/problems/combinations

class Solution {
public:
    void fxn(int n,int k, vector<vector<int>>&ans,vector<int>v,int ind,int cnt){
        if(cnt>k)return;
        if(ind>n||cnt==k){
         if(v.size()==k)ans.push_back(v);
            
            return;
        }
        v.push_back(ind);
        fxn(n,k,ans,v,ind+1,cnt+1);
        v.pop_back();
        fxn(n,k,ans,v,ind+1,cnt);
    }
    
    vector<vector<int>> combine(int n, int k) {
    vector<int>v;
        vector<vector<int>>ans;
        
        fxn(n,k,ans,v,1,0);
        return ans;
    }
};