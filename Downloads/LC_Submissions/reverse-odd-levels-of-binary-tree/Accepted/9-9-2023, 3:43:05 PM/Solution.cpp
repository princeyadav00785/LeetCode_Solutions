// https://leetcode.com/problems/reverse-odd-levels-of-binary-tree

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
    TreeNode* reverseOddLevels(TreeNode* root) {
         traverse(root->left,root->right,1);
         return root;
    }
    void traverse(TreeNode* let,TreeNode* rigt ,int lvl){
        if(let==NULL||rigt==NULL)return ;
     if(lvl%2!=0){
         int l=let->val;
         let->val=rigt->val;
         rigt->val=l;
         
     }
        traverse(let->right,rigt->left,lvl+1);
        traverse(let->left,rigt->right,lvl+1);
    
    }
};

