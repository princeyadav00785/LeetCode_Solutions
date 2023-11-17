// https://leetcode.com/problems/validate-binary-tree-nodes

class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& l, vector<int>& r) {
      vector<int>v(n,-1);
        for(int i=0;i<n;i++){
            if(l[i]!=-1)v[l[i ]]=i;
        }
        for(int i=0;i<n;i++){
            if(r[i]!=-1){
                if(v[r[i]]!=-1)return false;
                else{
                    v[r[i]]=i;
                }
            }
        }
        int cnt=0;
        for(int i=0;i<v.size();i++){
            // cout<<v[i]<<"  ";
            if(v[i]==-1)cnt++;
        }
        if(cnt!=1)return false;
        return true;
    }
};