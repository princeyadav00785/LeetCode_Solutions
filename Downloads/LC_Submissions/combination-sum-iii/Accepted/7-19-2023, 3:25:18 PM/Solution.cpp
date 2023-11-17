// https://leetcode.com/problems/combination-sum-iii

class Solution {
public:
        void fxn(vector<int>&c,int k,vector<int>v ,vector<vector<int>>&ans,int ind,int n){
       
        if(ind==c.size()){
            if(k==0&&v.size()==n){ans.push_back(v);}
            return;
            }
        
        if(c[ind]<=k){
            v.push_back(c[ind]);
            
            fxn(c,k-c[ind],v,ans,ind+1,n);
            v.pop_back();
            
        }
             fxn(c,k,v,ans,ind+1,n);
        
        
    }
    
    vector<vector<int>> combinationSum3(int n, int k) {
        vector<int>c(9,0);
        for(int i=0; i<9;i++){
            c[i]=i+1;
        }
        vector<vector<int>>ans;
        vector<int>v;
        fxn(c,k,v,ans,0,n);
            return ans;
    }
};