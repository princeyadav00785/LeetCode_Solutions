// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            vector<vector<int>>ans;
        queue<TreeNode*> q;
        if(root==NULL){return ans;}
        q.push(root);
        int f=0;
        while(q.size()){
            vector<int> v;
            int n= q.size();
            for(int i=0;i<n;i++){
                 TreeNode* a= q.front();
                q.pop();
                if(a!=NULL){ 
                if(a->left) q.push(a->left);
                   if(a->right) q.push(a->right);
                v.push_back(a->val);} 
            }
            
            if(f%2!=0){reverse(v.begin(),v.end());}
              ans.push_back(v); 
            f++;
        }
        return ans;
    }
};