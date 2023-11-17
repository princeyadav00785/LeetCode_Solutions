// https://leetcode.com/problems/validate-binary-search-tree

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
    bool fxn(TreeNode*root , int lower,int upper)
    {
        if(root==NULL)return true;
        if(root->val>=upper||root->val<=lower)return false;
        return fxn(root->right,root->val,upper)&&fxn(root->left,lower,root->val);
        
        
    }    
    
    bool isValidBST(TreeNode* root) {
        return  fxn(root,INT_MIN,INT_MAX);
    }
};