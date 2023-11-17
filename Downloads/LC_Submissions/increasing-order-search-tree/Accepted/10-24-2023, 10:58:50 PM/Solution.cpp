// https://leetcode.com/problems/increasing-order-search-tree

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
    vector<int>v;
    void traversal(TreeNode* root){
        if(root==NULL)return;
        v.push_back(root->val);
        if(root->right)traversal(root->right);
        if(root->left)traversal(root->left);
        return ;
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL||(!root->left&&root->right))return root;
        traversal(root);
        sort(v.begin(),v.end());
        TreeNode* ans= new TreeNode(v[0]);
        TreeNode* result=ans;
        
        for(int i=1;i<v.size();i++){
            TreeNode*temp= new TreeNode(v[i]);
            ans->right= temp;
            ans=temp;
            cout<<v[i];
        }
        return result;
        
    }
};