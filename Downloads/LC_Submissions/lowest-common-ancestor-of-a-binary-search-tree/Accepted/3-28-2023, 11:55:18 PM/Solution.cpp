// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
      TreeNode* fxn(TreeNode* root,TreeNode*p,TreeNode*q){
          if(root==NULL){
              return root;
          }
          if(root->val>p->val&&root->val<q->val){
              return root;
          }
          fxn(root->left,p,q);
          fxn(root->left,p,q);
          return root;
      }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // return fxn(root,p,q);
         if (root == NULL || p->val == root->val || q->val == root->val)
            return root;
        if (p->val < root->val && q->val < root->val)
                return lowestCommonAncestor(root->left, p, q);
        if (p->val > root->val && q->val > root->val)
                return lowestCommonAncestor(root->right, p, q); 
        return root;
    }
};