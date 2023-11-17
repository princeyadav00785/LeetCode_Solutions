// https://leetcode.com/problems/symmetric-tree

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
     bool isEquivalent(TreeNode* left, TreeNode* right) {
        if (!left || !right) return left == right;
        else return left->val == right->val && isEquivalent(left->left, right->right) && isEquivalent(right->left, left->right);
    }

    bool isSymmetric(TreeNode* root) {
        if(root==NULL){return true;}
      return isEquivalent(root->right,root->left);
    }
    // bool isEquivalent(TreeNode*left,TreeNode*right){
    //     if(left->val!=right->val){return  false;}
    //     bool left= isEquivalent
    // }
};