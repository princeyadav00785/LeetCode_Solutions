// https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree

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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long >ans;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()){ 
            int n= q.size();
                        long long s=0;
            for(int i=0;i<n;i++){
                 TreeNode* a= q.front();
                q.pop();
                if(a!=NULL){ 
                if(a->left) q.push(a->left);
                   if(a->right) q.push(a->right);
                s+=a->val;} 
            }
              ans.push_back(s);   
        }
        if(k>ans.size())return -1;
        else {

            sort(ans.begin(),ans.end(),greater<long long >());
            return ans[k-1];
        }
    }
};