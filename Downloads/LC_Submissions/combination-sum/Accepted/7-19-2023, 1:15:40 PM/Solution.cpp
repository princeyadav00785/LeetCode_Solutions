// https://leetcode.com/problems/combination-sum

class Solution {
public:
    void fxn(vector<int>&c,int k,vector<int>v ,vector<vector<int>>&ans,int ind){
       
        if(ind==c.size()){
            if(k==0){ans.push_back(v);}
            return;
            }
        
        if(c[ind]<=k){
            v.push_back(c[ind]);
            
            fxn(c,k-c[ind],v,ans,ind);
            v.pop_back();
            
        }
             fxn(c,k,v,ans,ind+1);
        
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& c, int k) {
        vector<vector<int>>ans;
        vector<int>v;
        fxn(c,k,v,ans,0);
            return ans;
    }
};