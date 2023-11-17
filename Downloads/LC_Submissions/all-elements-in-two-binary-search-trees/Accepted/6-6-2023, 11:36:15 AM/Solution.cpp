// https://leetcode.com/problems/all-elements-in-two-binary-search-trees

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
     void inorder(TreeNode*root,vector<int>&v){
         if(root==NULL){return;}
         inorder(root->left,v);
         v.push_back(root->val);
         inorder(root->right,v);
         
     }
    vector<int> getAllElements(TreeNode* r1, TreeNode* r2) {
        vector<int>a;
        vector<int>b;
        vector<int>c;
        
        inorder(r1,a);
        inorder(r2,b);
        for(int i=0;i<a.size();i++){
            c.push_back(a[i]);
            cout<<a[i]<<" ";
        }
          for(int i=0;i<b.size();i++){
            c.push_back(b[i]);
        }
        sort(c.begin(),c.end());
        return c;
    }
};