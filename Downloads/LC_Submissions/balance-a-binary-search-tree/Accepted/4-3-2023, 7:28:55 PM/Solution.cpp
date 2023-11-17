// https://leetcode.com/problems/balance-a-binary-search-tree

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
    
    TreeNode* fxn(vector<int>&v,int s, int end){
        if(s>end){return NULL;}
        int mid  =(s+end)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->right=fxn(v,mid+1,end);
        root->left=fxn(v,s,mid-1);
        return root;
    }
    void inorder(vector<int>&v , TreeNode* root){
        if(root==NULL){return ;}
        inorder(v,root->left);
        v.push_back(root->val);
        inorder(v,root->right);
        return ;
        
    }
    TreeNode* balanceBST(TreeNode* root) {
        if(root==NULL){return NULL;}
        vector<int> v;
        inorder(v,root);
        int s=0,end=v.size()-1;
        return fxn(v,s,end);
        
        
//          public static TreeNode Balance( ArrayList<Integer> list,int st,int end){
//         if(st>end){
//             return null;
//         }
//         int mid=(st+end)/2;
//         TreeNode root=new TreeNode(list.get(mid));
//         root.left=Balance(list,st,mid-1);
//         root.right=Balance(list,mid+1,end);
//         return root;
//     }
//     public static void inorder(TreeNode root, ArrayList<Integer> list){
//           if(root==null){
//             return;
//         }
//         inorder(root.left,list);
//         list.add(root.val);
//         inorder(root.right,list);
//     }
//     public TreeNode balanceBST(TreeNode root) {
//         ArrayList<Integer> list =new ArrayList<>();
//       if(root==null){
//         return null;
//       }
//         inorder(root,list);
      
//         TreeNode root1=Balance(list,0,list.size()-1);
//         return root1;
    }
};