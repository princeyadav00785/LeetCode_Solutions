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
    public: void traversal(TreeNode* root , vector<int> &v){
        if(root==NULL){
            return ;
        }
        
        traversal(root->left, v);
        v.push_back(root->val);
        traversal(root->right , v);
    }
    public: bool compare(TreeNode*p, TreeNode*q){
          TreeNode* p2=p;
        TreeNode* q2=q;
        if(p==NULL&&q==NULL){return true;}
        if(p==NULL&&q!=NULL){return false;}
        if(q==NULL&&p!=NULL){return false;}else{
        if((p2->val)!=(q2->val)){
            return false;
        }else return true;}
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> v1;
        vector<int> v2;
        TreeNode* p1=p;
        TreeNode* q1=q;
       
         if(compare(p1,q1)==false){return false;}else{
        traversal(p, v1);
        traversal(q,v2);
        if(v1==v2){return true;}else return false;}
    }
};