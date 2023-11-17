// https://leetcode.com/problems/average-of-levels-in-binary-tree

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
    vector<double> averageOfLevels(TreeNode* root) {
          vector<double>ans;
        queue<TreeNode*> q;
        if(root==NULL){return ans;}
        q.push(root);
        while(q.size()){
            vector<double> v;
         double av=0.00,sum=0.00;
            int n= q.size();
            for(int i=0;i<n;i++){
                 TreeNode* a= q.front();
                q.pop();
                if(a!=NULL){ 
                if(a->left) q.push(a->left);
                   if(a->right) q.push(a->right);
                v.push_back(a->val);
                sum+=a->val;} 
            }
           av=(double)sum/v.size();
              ans.push_back(av);   
        }
        
     return ans;   
    }
};