// https://leetcode.com/problems/amount-of-time-for-binary-tree-to-be-infected

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
    int fxn(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        int l=fxn(root->left);
        int r= fxn(root->right);
        return 1+max(l,r);
    }
    
    int lvl(TreeNode*root , int start){
        int cnt=0;
        queue<TreeNode*>q;
        q.push(root);
        int a=0;
        while(!q.empty()){
            int n= q.size();
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front();
            q.pop();
            if(temp->left){q.push(temp->left);}
            if(temp->right){q.push(temp->right);}
          
            if(temp->val==start){a=1;}
            }
              cnt++;
            if(a==1){break;}
        }
        
        
        return cnt;
    }
    
    int amountOfTime(TreeNode* root, int start) {
     int h= fxn(root)-1; 
        int level= lvl(root,start)-1;
        // cout<<h<<" "<<"l->"<<level;
        return level+h;
    }
};