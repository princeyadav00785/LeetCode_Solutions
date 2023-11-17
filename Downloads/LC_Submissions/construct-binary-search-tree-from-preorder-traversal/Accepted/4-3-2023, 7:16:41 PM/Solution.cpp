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
    // TreeNode* build(vector<int>&v,int &i,int bound){
    //     // (vector<int> &A, int &i, int bound)
    //     if(i==v.size()||v[i]>bound)return NULL;
    //     TreeNode* node= new TreeNode(v[i++]);
    //     node->right=build(v,i,bound);
    //     node->left=build(v,i,node->val);
    //     return node;
    //      if(i==A.size() || A[i]>bound) return NULL;
    // TreeNode* root= new TreeNode(A[i++]);
    // root->left=build(A,i,root->val);
    // root->right=build(A,i,bound);
    // return root;
    // }
    
    // TreeNode* bstFromPreorder(vector<int>& preorder) {
    //     int i=0;
    //     return build(preorder,i,INT_MAX);
    // }
    TreeNode* bstFromPreorder(vector<int>& A) 
{
    int i=0;
    return build(A,i,INT_MAX);   
}
TreeNode* build(vector<int> &A, int &i, int bound){
   if(i==A.size() || A[i]>bound) return NULL;
    TreeNode* root= new TreeNode(A[i++]);
    root->left=build(A,i,root->val);
    root->right=build(A,i,bound);
    return root;
}
    
};