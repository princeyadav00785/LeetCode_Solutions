// https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree

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
 
    int maxLevelSum(TreeNode* root) {
        int sum=0,lvl=0,ans=0;
         queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            lvl++;
            int vaal=0;
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* a= q.front();
            q.pop();
                vaal+=a->val;
                if(a->left)q.push(a->left);
            if(a->right)q.push(a->right);
            }
            if(vaal>sum){
                ans=lvl;
                sum = vaal;
            }}
        return ans;
    }
};