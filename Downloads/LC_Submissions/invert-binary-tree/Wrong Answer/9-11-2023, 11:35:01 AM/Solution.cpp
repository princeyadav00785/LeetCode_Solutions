// https://leetcode.com/problems/invert-binary-tree

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
    TreeNode* fxn(TreeNode* root){
      if(root==NULL)return root;
        if(!root->left&&!root->right)return root;   
        if(!root->right){
            TreeNode* temp=root->left;
            root->right=temp;
            root->left=NULL;
            
        }
        if(!root->left){
            TreeNode* temp=root->right;
            root->left=temp;
            root->right=NULL;
        }else{
              TreeNode* temp=root->right;
            root->right=root->left;
            root->left=temp;
        }
        fxn(root->left);
        fxn(root->right);
        return root;
    }
    
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)return root;
        if(!root->left&&!root->right)return root;
        TreeNode* ans= fxn(root);
        return ans;
    }
};