// https://leetcode.com/problems/permutations

class Solution {
public:
    
    void fxn( vector<vector<int>>&ans,vector<int>v,int index,int n){
        if(index>=n){
            ans.push_back(v);
            return;
        }
        for(int i=index;i<n;i++){
            swap(v[i],v[index]);
            
            fxn(ans,v,index+1,n);
              // swap(v[i],v[index]);
        }
        return ;
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        
        fxn(ans,nums,0,nums.size());
        return ans;
    
    
    }
};