// https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition

class Solution {
public:
    int numSubseq(vector<int>& A, int target) {
//         int l=0, h= nums.size()-1,mod=1e9+7,n=nums.size();
//         vector<int> v(nums.size()+1,1);
//         sort(nums.begin(),nums.end());
//         for(int i=1;i<=n;i++){
//             v[i]=v[i-1]*2%mod;
//         }
//         while(!(nums[l]+nums[h]<target)){
//             h--;
//         }
//         return v[h-l+1];
        
        
           sort(A.begin(), A.end());
        int res = 0, n = A.size(), l = 0, r = n - 1, mod = 1e9 + 7;
        vector<int> pows(n, 1);
        for (int i = 1 ; i < n ; ++i)
            pows[i] = pows[i - 1] * 2 % mod;
        while (l <= r) {
            if (A[l] + A[r] > target) {
                r--;
            } else {
                res = (res + pows[r - l++]) % mod;
            }
        }
        return res;
    }
};