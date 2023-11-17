// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree

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
     TreeNode* fxn(TreeNode* root, TreeNode* p, TreeNode* q){
         if(root==NULL||root->val==p->val||root->val==q->val){
             return root;
         }
         
         TreeNode* let= fxn(root->left,p,q);
          TreeNode* rigt= fxn(root->right,p,q);
         
         if(let==NULL){
             return rigt;
         }
         else if(rigt==NULL){
             return let;
         }else return root;
         
     }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans= fxn(root,p,q);
        return ans;
    }
};