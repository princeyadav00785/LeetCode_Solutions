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
        vector<int>ans;
        queue<TreeNode*> q;
        // if(root==NULL){return ans;}
        q.push(root);
        while(q.size()){
            vector<int> v;
            int n= q.size();
            for(int i=0;i<n;i++){
                 TreeNode* a= q.front();
                q.pop();
                if(a!=NULL){ 
                if(a->left) q.push(a->left);
                   if(a->right) q.push(a->right);
                v.push_back(a->val);} 
            }
            int s=0;
            for(int i=0;i<v.size();i++){
                s+=v[i];
            }
              ans.push_back(s);   
        }
        if(k>ans.size())return -1;
        else {

            sort(ans.begin(),ans.end(),greater<int>());
                        for(auto x:ans){
                cout<<x<<" "<<endl;
            }
            return ans[k-1];
        }
    }
};