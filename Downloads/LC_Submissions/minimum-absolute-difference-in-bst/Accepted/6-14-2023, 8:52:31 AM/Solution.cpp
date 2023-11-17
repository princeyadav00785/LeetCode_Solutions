// https://leetcode.com/problems/minimum-absolute-difference-in-bst

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
    void traversal(vector<int>&v,TreeNode* root){
        if(root==NULL){return ;}
        v.push_back(root->val);
        traversal(v,root->right);
        traversal(v,root->left);
    }
    
    int getMinimumDifference(TreeNode* root) {
        vector<int> v;
        traversal(v,root);
        sort(v.begin(),v.end());
        int mnm=INT_MAX;
        for(int i=1;i<v.size();i++){
            int diff= abs(v[i]-v[i-1]);
            mnm= min(mnm, diff);
        }
        return mnm;
    }
};