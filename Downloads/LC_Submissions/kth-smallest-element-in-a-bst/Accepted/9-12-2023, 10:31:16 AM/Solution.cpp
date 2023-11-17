// https://leetcode.com/problems/kth-smallest-element-in-a-bst

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
    int cnt=0;
    int dfs(TreeNode* root){
        if(root==NULL)return -1;
        int ans = dfs(root->left);
        if(ans!=-1)return ans;
        if(cnt==1)return root->val;
        cnt--;
       return dfs(root->right);
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        cnt=k;
        return dfs(root);
    }
};