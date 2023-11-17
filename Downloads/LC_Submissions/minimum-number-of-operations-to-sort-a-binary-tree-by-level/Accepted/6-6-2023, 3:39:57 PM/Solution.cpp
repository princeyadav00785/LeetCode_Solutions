// https://leetcode.com/problems/minimum-number-of-operations-to-sort-a-binary-tree-by-level

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
//     int fxn(TreeNode*root){
//         int cnt=0;
//         // vector<vector<int>>ans;
//         queue<TreeNode*> q;
//         if(root==NULL){return cnt;}
//         q.push(root);
//         while(q.size()){
//             vector<int> v;
//             int m=0;
//             int n= q.size();
//             for(int i=0;i<n;i++){
//                  TreeNode* a= q.front();
//                 q.pop();
//                 if(a!=NULL){ 
//                 if(a->left) q.push(a->left);
//                    if(a->right) q.push(a->right);
//                 v.push_back(a->val);} 
                
//             }
//             vector<int>x(v.begin(),v.end());
//             sort(x.begin(),x.end());
//             for(int i=0;i<v.size();i++){
//                 if(v[i]!=x[i]){cnt++;m=1;}
//             }
//             if(m==1){cnt=cnt-1;}
//               // ans.push_back(v);   
//         }
//         return cnt;
//     }
    
//     int minimumOperations(TreeNode* root) {
//       int ans= fxn(root);
//         return ans;
    
       int countSwap(vector<int>& t){
        int count = 0;
        map<int,int> mp;
        vector<int> u;
        for(int i = 0; i < t.size(); ++i){
            mp[t[i]] = i;
            u.push_back(t[i]);
        }
        sort(u.begin(), u.end());
        for(int i = 0; i < t.size(); ++i){
            if(t[i] != u[i] ){  // if not at correct place update the values in map and t array
                t[mp[u[i]]] = t[i];
                mp[t[i]] = mp[u[i]];
                mp[u[i]] = i;
                t[i] = u[i];
                count++;
            }
        }
        return count;
    }
    int minimumOperations(TreeNode* root) {
        int ans = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> t;
            while(n--){
                TreeNode* node = q.front();
                t.push_back(node->val);
                q.pop();
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
            }
            for(auto c: t) cout<<c<<" "; cout<<endl;
            ans += countSwap(t);
        }
        return ans;
    }
};