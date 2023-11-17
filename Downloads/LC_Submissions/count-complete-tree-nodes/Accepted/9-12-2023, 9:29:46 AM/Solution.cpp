// https://leetcode.com/problems/count-complete-tree-nodes

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
    void fxn(TreeNode* root,  vector<int>&v){
        if(root==NULL)return ;
        v.push_back(root->val);
        fxn(root->left,v);
        fxn(root->right,v);
    }
    
    int countNodes(TreeNode* root) {
        vector<int>v;
        fxn(root,v);
        return v.size();
    }
};