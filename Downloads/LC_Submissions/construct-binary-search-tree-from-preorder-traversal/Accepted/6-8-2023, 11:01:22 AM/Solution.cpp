// https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal

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
    TreeNode* fxn(vector<int>v,int& i , int bound){
        
        if(i==v.size()||v[i]>bound )return NULL;
        TreeNode* root = new TreeNode(v[i++]);
        root->left= fxn(v,i,root->val);
        root->right=fxn(v,i,bound);
        return root;
        
        
//           if(i==A.size() || A[i]>bound) return NULL;
//     TreeNode* root= new TreeNode(A[i++]);
//     root->left=build(A,i,root->val);
//     root->right=build(A,i,bound);
//     return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& v) {
        int i=0,bound =INT_MAX;
        return fxn(v,i,bound);
        
    }
};