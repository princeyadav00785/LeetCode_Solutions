// https://leetcode.com/problems/maximum-width-of-binary-tree

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root)
            return 0;

//         queue<pair<TreeNode*, unsigned long long>> q;
//         q.push({root, 1});
//         int maxWidth = 1;

//         while (!q.empty()) {
//             int size = q.size();
//             unsigned long long leftmost = q.front().second;

//             for (int i = 0; i < size; i++) {
//                 auto nodePair = q.front();
//                 TreeNode* node = nodePair.first;
//                 unsigned long long position = nodePair.second;
//                 q.pop();

//                 if (node->left) {
//                     q.push({node->left, 2 * position});
//                 }

//                 if (node->right) {
//                     q.push({node->right, 2 * position + 1});
//                 }

//                 maxWidth = max(maxWidth, static_cast<int>(position - leftmost + 1));
//             }
//         }

//         return maxWidth;
        int ans=1;
        queue<pair<TreeNode*,unsigned long long int>>q;
        q.push({root,1});
        while(!q.empty()){
              int n=q.size();
            int left=q.front().second; 
            for(int i=0;i<n;i++){
                TreeNode* a= q.front().first;
                int pos=q.front().second;
                q.pop();
                if(a->left)q.push({a->left,2*pos});
                if(a->right)q.push({a->right,2*pos+1});
                ans=max(ans,pos-left+1);
            }
        }
        return ans;
    }
};
