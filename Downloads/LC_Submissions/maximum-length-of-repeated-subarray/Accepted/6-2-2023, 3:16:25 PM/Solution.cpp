// https://leetcode.com/problems/maximum-length-of-repeated-subarray

class Solution {
public:
    
int fxn(vector<int> nums1,vector<int>nums2,int n,int m){
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(nums1[i-1]==nums2[j-1]){
                dp[i][j]= 1+dp[i-1][j-1];
            }else {
                dp[i][j]=0;
            }
             ans = max(ans, dp[i][j]);
        }
    }
    
    return ans;
}
//       int n1 = nums1.size(), n2 = nums2.size(), ans = 0;
//         vector<vector<int>>dp(n1+1, vector<int>(n2+1, 0));
  
//         for(int i = 1; i <= n1; i++)
//             for(int j = 1; j <= n2; j++){
//                 if(nums1[i-1] == nums2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
//                 else dp[i][j] = 0;
//                 ans = max(ans, dp[i][j]);
//             }
//         return ans;
    
    int findLength(vector<int>& nums1, vector<int>& nums2) {
   int ans = fxn(nums1,nums2,nums1.size(),nums2.size());
        return ans;
    }
};