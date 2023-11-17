// https://leetcode.com/problems/binary-tree-right-side-view

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
    void fxn(TreeNode* root,vector<int>&ans){
        if(root==NULL)return ;
        ans.push_back(root->val);
        fxn(root->right,ans);
    }
    
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        fxn(root,ans);
        
        
        return ans;
        
    }
};