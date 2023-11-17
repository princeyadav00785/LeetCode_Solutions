// https://leetcode.com/problems/validate-binary-search-tree

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
    // bool istrue(TreeNode* root,int up,int down){
    //      if(root!=NULL){return true;}
    //     if(root->val>=up){return false;}
    //       if(root->val<=down){return false;}
    //     return istrue(root->left,root->val,down)||istrue(root->right,up,root->val);
//          if(!root){
//             return true;
//         }
//         if(root->val<=lowerb || root->val>=upperb){
//             return false;
//         }
//         return traverse(root->left,lowerb,root->val) && traverse(root->right,root->val,upperb);
        
//     }
    
//     bool isValidBST(TreeNode* root) {
       
//         return istrue(root,INT_MAX,INT_MIN);
        
          bool traverse(TreeNode* root,long long int lowerb,long long int upperb){
        if(!root){
            return true;
        }
        if(root->val<=lowerb || root->val>=upperb){
            return false;
        }
        return traverse(root->left,lowerb,root->val) && traverse(root->right,root->val,upperb);
        
    }
    bool isValidBST(TreeNode* root) {
        
        return traverse(root,LLONG_MIN,LLONG_MAX);
    }
};