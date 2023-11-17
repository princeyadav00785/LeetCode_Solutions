// https://leetcode.com/problems/trim-a-binary-search-tree

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
    TreeNode* fxn(TreeNode* root, int low, int high){
        if(!root)return NULL;
        if(root->val>high)return root->left;
        if(root->val<low)return root->right;
        root->right= fxn(root->right,low,high);
        root->left=fxn(root->left,low,high);
       return root;
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
       return fxn(root,low,high);
       
    }
};