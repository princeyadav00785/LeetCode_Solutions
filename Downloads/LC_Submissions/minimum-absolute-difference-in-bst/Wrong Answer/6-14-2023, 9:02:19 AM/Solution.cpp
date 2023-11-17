// https://leetcode.com/problems/minimum-absolute-difference-in-bst

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
    void traversal(int &mnm,TreeNode* root){
        if(root==NULL){return ;}
        int l=INT_MAX,r=INT_MAX,c=INT_MAX;
        if(root->left) l = abs(root->val-root->left->val);
        if(root->right) r=abs(root->val-root->right->val);
        if(root->left&&root->right)c= abs(root->left->val-root->right->val);
        mnm = min({l,r,mnm});
        traversal(mnm,root->right);
        traversal(mnm,root->left);
    }
    
    int getMinimumDifference(TreeNode* root) {
         int mnm=INT_MAX,node=INT_MAX;
        traversal(mnm,root);
        return mnm;
    }
};