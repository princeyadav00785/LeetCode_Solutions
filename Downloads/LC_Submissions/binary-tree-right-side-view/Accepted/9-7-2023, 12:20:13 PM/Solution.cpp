// https://leetcode.com/problems/binary-tree-right-side-view

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
    vector<int> rightSideView(TreeNode* root) {
          vector<int>a;
          vector<vector<int>>ans;
        queue<TreeNode*> q;
        if(root==NULL){return a;}
        q.push(root);
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
              ans.push_back(v);   
        }
     
      
        for(int i=0;i<ans.size();i++){
            // for(int j=0;j<ans[i].size();j++){
                int n=ans[i].size();
                a.push_back(ans[i][n-1]);
            // }
        }
        return a;
    }
};