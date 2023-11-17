// https://leetcode.com/problems/deepest-leaves-sum

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
    
    vector<vector<int>> levelOrder(TreeNode *root)
{vector<vector<int>>ans;
  if(root==NULL)return ans;
        queue<TreeNode*> q;
      
        q.push(root);
        while(!q.empty()){
            int size= q.size();
            vector<int>v;
            for(int i=0;i<size;i++){
                TreeNode *curr=q.front();
                q.pop();
                if(root->left!=NULL) q.push(root->left);
                 if(root->right!=NULL) q.push(root->right);
                v.push_back(root->val);
            }
            ans.push_back(v);
        }
        return ans;
        
}
    
    int deepestLeavesSum(TreeNode* root) {
     // vector<vector<int>>ans=levelOrder(root);
        // vector<int>v=ans[ans.size()-1];
        // int sum = 0;
        // for(int i=0;i<v.size();i++){
        //     sum+=v[i];
        // }
        // return sum;
                queue<TreeNode*>q;
        q.push(root);
        int sum;
        while(!q.empty()){ 
            sum=0;
            int size = q.size();
            while(size--){
                TreeNode*temp = q.front(); 
                sum+=temp->val;
                q.pop();
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
        }
        return sum;
    }
};