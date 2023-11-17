// https://leetcode.com/problems/path-sum-ii

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void fxn(TreeNode*root,vector<vector<int>>&ans,vector<int>&v,int s){
        if(root==NULL){
            int a=0;
            for(int i=0;i<v.size();i++){
                a+=v[i];
            }
            if(a==s){ans.push_back(v);}
            return ;
        }
        v.push_back(root->val);
        fxn(root->left,ans,v,s);
        fxn(root->right,ans,v,s);
        v.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int s) {
              vector<int>v;
         vector<vector<int>> ans;
        if(root==NULL){return ans;}
       
  
        fxn(root,ans,v,s);
        set<vector<int>>st(ans.begin(),ans.end());
        vector<vector<int>>f(st.begin(),st.end());
        return f;
    }
};