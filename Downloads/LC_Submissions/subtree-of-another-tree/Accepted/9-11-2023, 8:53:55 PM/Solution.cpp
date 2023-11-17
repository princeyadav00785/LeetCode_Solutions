// https://leetcode.com/problems/subtree-of-another-tree

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
 
 bool areSame(TreeNode* root, TreeNode* subRoot){
   if(root==NULL||subRoot==NULL)return root==subRoot;

        return (root->val == subRoot->val && areSame(root->left, subRoot->left) && areSame(root->right, subRoot->right));
    }

    void traverse(TreeNode* root, TreeNode* subRoot, bool &ans){
        if(ans) return; 
        if(root->val == subRoot->val && areSame(root, subRoot)){
            ans = true;
            return;
        }

        if(root->left) traverse(root->left, subRoot, ans);
        if(root->right) traverse(root->right, subRoot, ans);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool ans = false;
        traverse(root, subRoot, ans);
        return ans;
    }
};