// https://leetcode.com/problems/two-sum-iv-input-is-a-bst

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
        if(!root)return;
        v.push_back(root->val);
        if(root->right)traversal(root->right);
        if(root->left)traversal(root->left);
    }
    bool findTarget(TreeNode* root, int k) {
        traversal(root);
        map<int,int>mp;
        for(int i=0;i<v.size();i++){
            mp[v[i]]++;
        }
        for(auto x:mp){
            mp[x.first]--;
            if(mp.find(k-x.first)!=mp.end()){
                if(mp[k-x.first]>0)
                return true;}
            mp[x.first]++;
            
        }
        return false;
    }
};