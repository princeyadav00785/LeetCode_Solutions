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
    void traverse(TreeNode* root,vector<int>&v){
        if(root==NULL)return ;
        v.push_back(root->val);
        traverse(root->right,v);
        traverse(root->left,v);
    }
    
    vector<int> findMode(TreeNode* root) {
        vector<int>v;
        traverse(root,v);
        map<int,int>mp;
        int mxm=0;
        for(int i=0;i<v.size();i++){
            mp[v[i]]++;
        }
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