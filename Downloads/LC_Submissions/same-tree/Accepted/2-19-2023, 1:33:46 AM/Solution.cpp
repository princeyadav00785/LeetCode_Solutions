// https://leetcode.com/problems/same-tree

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
    void preordertraversal(TreeNode* head , vector<int>& v){
          
            if(head ==NULL){
                return ;
            }
        v.push_back(head->val);
        preordertraversal(head->left ,v);
        preordertraversal(head->right,v);
       
    }
    
    void traversal(TreeNode* root , vector<int> &v){
        if(root==NULL){
            return ;
        }
          v.push_back(root->val);
           traversal(root->left,v);
           traversal(root->right,v);
    }
    
public:
   bool isSameTree(TreeNode *p, TreeNode *q) {
    if (p == NULL || q == NULL) return (p == q);
    return (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
}
};