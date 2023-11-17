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
    TreeNode* fxn (TreeNode* root, TreeNode* p, TreeNode* q){
        
        // if(root->val>p->val&&root->val>q->val){
        //     fxn(root->right,p,q);
        // }else  if(root->val<p->val&&root->val<q->val){
        //     fxn(root->left,p,q);
        // }
        // else return root;
        // return root;
        if(root==NULL||root==p||root==q){
            return root;
        }
        TreeNode* lt = fxn(root->left,p,q);
            TreeNode* rt=fxn(root->right,p,q);
        if(lt==NULL){return rt;}
        else if(rt==NULL)return lt;
        else return root;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       return  fxn(root,p,q);
    }
};