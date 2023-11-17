// https://leetcode.com/problems/balanced-binary-tree

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
    int fxn(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int l= fxn(root->left);
        int r= fxn(root->right);
        if(abs(l-r)>1){return -1;}
        if(l==-1||r==-1){return -1;}else{
            return 1+max(l,r);
        }
    }
    
    bool isBalanced(TreeNode* root) {
        int ans = fxn(root);
        if(ans==-1){return false ;}else return true;
    }
};