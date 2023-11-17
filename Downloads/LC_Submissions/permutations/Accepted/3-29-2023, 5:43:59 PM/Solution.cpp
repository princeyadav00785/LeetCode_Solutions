// https://leetcode.com/problems/permutations

class Solution {
public:
    
//     void fxn( vector<vector<int>>&ans,vector<int>v,int index,int n){
//         if(index>=n){
//             ans.push_back(v);
//             return;
//         }
//         for(int i=index;i<n;i++){
//             swap(v[i],v[index]);
            
//             fxn(ans,v,index+1,n);
//               swap(v[i],v[index]);
//         }
//         return ;
//     }
    
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>>ans;
        
//         fxn(ans,nums,0,nums.size());
//         return ans;
    
      void solve(int s,int n,vector<int> &v,vector<vector<int>> &ans){
        if(s==n-1){
            ans.push_back(v);
            return;
        }
        for(int i = s; i<n; i++){
            cout<<s<<" "<<i<<endl;
            swap(v[s],v[i]);
            solve(s+1,n,v,ans);
            swap(v[s],v[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(0,nums.size(),nums,ans);
        return ans;
    
    }
};