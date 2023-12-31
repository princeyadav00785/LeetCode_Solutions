// https://leetcode.com/problems/same-tree

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
    public: void traversal(TreeNode* root , vector<int> &v){
        if(root==NULL){
            return ;
        }
        
        traversal(root->left, v);
        v.push_back(root->val);
        traversal(root->right , v);
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> v1;
        vector<int> v2;
        traversal(p, v1);
        traversal(q,v2);
        if(v1==v2){return true;}else return false;
    }
};