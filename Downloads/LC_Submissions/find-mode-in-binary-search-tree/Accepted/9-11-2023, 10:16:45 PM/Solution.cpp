// https://leetcode.com/problems/find-mode-in-binary-search-tree

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
     map<int,int>mp;
    void traverse(TreeNode* root){
        if(root==NULL)return ;
           mp[root->val]++;
        traverse(root->right);
        traverse(root->left);
    }
    
    vector<int> findMode(TreeNode* root) {
        traverse(root);   
        int mxm=0;
        for(auto x:mp){
            if(x.second>mxm)mxm=x.second;
        }
        vector<int>ans;
        for(auto x:mp){
            if(x.second==mxm)ans.push_back(x.first);
        }
        return ans;
    }
};