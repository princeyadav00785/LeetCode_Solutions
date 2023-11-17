// https://leetcode.com/problems/find-largest-value-in-each-tree-row

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
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL)return {};
        vector<vector<int>>v;
        vector<int>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n= q.size();
            vector<int>temp;
            for(int i=0;i<n;i++){
                TreeNode* t=q.front();
                int N= t->val;
                q.pop();
               if(t->right)q.push(t->right);
                if(t->left)q.push(t->left);
                temp.push_back(N);
            }
            v.push_back(temp);
        }
        
        for(int i=0;i<v.size();i++){
            int mxm=INT_MIN;
            for(int j=0;j<v[i].size();j++){
                if(v[i][j]>mxm)mxm=v[i][j];
            }
            ans.push_back(mxm);
        }
        return ans;
    }
};