// https://leetcode.com/problems/kth-smallest-element-in-a-bst

/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int count;
    public int kthSmallest(TreeNode root, int k) {
        count = k;
        return dfs(root);
    }

    int dfs(TreeNode node) {
        if (node == null) return -1;
        int ans = dfs(node.left);
        if (ans != -1) return ans;
        if (count == 1) return node.val;
        count--;
        return dfs(node.right);
    }
}
