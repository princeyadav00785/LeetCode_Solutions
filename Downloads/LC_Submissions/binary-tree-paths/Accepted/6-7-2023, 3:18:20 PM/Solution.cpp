// https://leetcode.com/problems/binary-tree-paths

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
    void fxn(TreeNode*root,string ans,vector<string>&ans1){
        // if(root== NULL){
        //     ans.push_back(s);
        //     return;
        // }
        // s=s+"->";
        //   s=s+to_string(root->val);
        // fxn(root->left,s,ans);
        // fxn(root->right,s,ans);
        
        
               if(root==NULL)
       {
           return ;
       }
    
        if(root->left==NULL&&root->right==NULL)
        {
            ans+=to_string(root->val);
            ans1.push_back(ans);
            return ;
        }

            ans+=to_string(root->val)+"->";
       
        fxn(root->left,ans,ans1);
        fxn(root->right,ans,ans1);

    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
       vector<string>ans;
        string s="";
        if(root==NULL){
            return ans;
        }
        fxn(root,s,ans);
        return ans;
    }
};