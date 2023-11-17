// https://leetcode.com/problems/sum-of-left-leaves

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
    int sum=0;
   void fxn(TreeNode* root,int f){
       if(!root)return ;
        if(!root->left&&!root->right){
            if(f==1)sum+=root->val;
            return ;
        }
       fxn(root->left,1);
       fxn(root->right,0);
    }
    
    
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL||(!root->left&&!root->right))return sum;
        fxn(root,0);
        return sum;
    }
};