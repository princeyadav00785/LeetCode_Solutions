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
    int fxn(TreeNode*root,int& maxi){
        if(root==NULL){return 0;}
        int l= max(0,fxn(root->left,maxi));
            int r=max(0,fxn(root->right,maxi));
        maxi= max(maxi,root->val+l+r);
        return root->val+max(r,l);
        
        
    }
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        int ans= fxn(root,sum);
        return sum;
    }
};