// https://leetcode.com/problems/binary-tree-inorder-traversal

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
    public: void traversal(TreeNode* root , vector<int>& x){
        
        if(root==NULL){
            return ;
        }
                  traversal(root->left ,x);
                 x.push_back(root->val);
                  traversal(root->right ,x);
         
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        traversal(root , v);
        
        return v;
    }
};