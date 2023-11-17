// https://leetcode.com/problems/longest-non-decreasing-subarray-from-two-arrays

class Solution {
public:
    int maxNonDecreasingLength(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<int>dp(n,1);
        for(int i=1;i<n;i++){
         for(int j=0;j<i;j++){
             int mxm=max(nums1[i],nums2[i]);
             int  mnm= min(nums1[j],nums2[j]);
             if(mnm<=mxm){
                 dp[i]=dp[j]+1;
             }
         }
        }
        
        int ans=0;
        for(int i=0;i<n;i++){
            // cout<<dp[i]<<" ";
            ans=max(ans,dp[i]);
        }
      return ans;
    }
};

//  nums1 = [1,3,2,1], nums2 = [2,2,3,4]