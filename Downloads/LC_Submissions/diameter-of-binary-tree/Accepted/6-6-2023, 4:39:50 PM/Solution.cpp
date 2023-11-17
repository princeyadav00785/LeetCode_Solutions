// https://leetcode.com/problems/diameter-of-binary-tree

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
        int fxn(TreeNode*root,int& maxi){
        if(root==NULL){
            return 0;
        }
        int l=fxn(root->left,maxi);
        int r= fxn(root->right,maxi);
            maxi=max(maxi,l+r);
        return 1+max(l,r);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int a=0;
        int ans = fxn(root,a);
        return a;
    }
};