// https://leetcode.com/problems/longest-univalue-path

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
    int fxn(TreeNode* root,int& maxi){
         if(root==NULL){
            return 0;
        }
        int l=fxn(root->left,maxi);
        int r= fxn(root->right,maxi);
        int dl=0,dr=0;
        if(root->left&&root->val==root->left->val){dl=l+1;}
        if(root->right&&root->val==root->right->val)dr=r+1;
            maxi= max(maxi,dl+dr);
            return max(dl,dr);
        
    
       
    }
    int longestUnivaluePath(TreeNode* root) {
          int a=0;
        int ans = fxn(root,a);
        return a;
    }
};