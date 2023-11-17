// https://leetcode.com/problems/binary-tree-maximum-path-sum

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
    int fxn(TreeNode*root,int& sum){
        if(root==NULL){
            return 0;
        }
        int l=fxn(root->left,sum);
        int r= fxn(root->right,sum);
        sum=max(sum,root->val+l+r);
        return root->val+max(r,l);
    }
    
    int maxPathSum(TreeNode* root) {
        int sum=0;
      int ans=fxn(root,sum);
        return sum;
    }
};