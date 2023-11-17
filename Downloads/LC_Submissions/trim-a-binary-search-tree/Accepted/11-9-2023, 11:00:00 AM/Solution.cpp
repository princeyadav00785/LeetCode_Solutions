// https://leetcode.com/problems/trim-a-binary-search-tree

class Solution {
public:
    TreeNode* fxn(TreeNode* root, int low, int high) {
        if (!root) {
            return nullptr;
        }

        if (root->val > high) {
            return fxn(root->left, low, high);
        }
        if (root->val < low) {
            return fxn(root->right, low, high);
        }

        root->right = fxn(root->right, low, high);
        root->left = fxn(root->left, low, high);

        return root;
    }

    TreeNode* trimBST(TreeNode* root, int low, int high) {
        return fxn(root, low, high);
    }
};
