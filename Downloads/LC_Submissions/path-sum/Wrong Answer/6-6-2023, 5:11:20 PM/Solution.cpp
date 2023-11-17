// https://leetcode.com/problems/path-sum

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
    void fxn(TreeNode*root , vector<int>&sum,vector<int>& s){
        if(root==NULL){
          int a=0;
            for(int i=0;i<s.size();i++){
                a+=s[i];
            }
            sum.push_back(a);
            return;
        }
        s.push_back(root->val);
        fxn(root->left,sum,s);
        fxn(root->right,sum,s);
        s.pop_back();
            
        
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
      vector<int>sum;
             vector<int> s;
        fxn(root,sum,s);
        for(int i=0;i<sum.size();i++){
            if(sum[i]==targetSum){return true;}
            cout<<sum[i]<<" ";
        }
        
        return false;
    }
};