// https://leetcode.com/problems/maximum-of-absolute-value-expression

class Solution {
public:
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
        long long int mxm=0;
        long long ans=0;
        for(int i=0;i<arr1.size();i++){
            for(int j=0;j<arr1.size();j++){
            mxm= abs(arr1[i]-arr1[j])+ abs(i-j)+abs(arr2[i]-arr2[j]);
                ans = max(ans,mxm);
            }
        }
        return ans;
    }
};