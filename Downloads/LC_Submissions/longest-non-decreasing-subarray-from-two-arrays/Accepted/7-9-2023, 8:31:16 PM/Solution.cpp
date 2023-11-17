// https://leetcode.com/problems/longest-non-decreasing-subarray-from-two-arrays

class Solution {
public:
    int maxNonDecreasingLength(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    vector<int> dp1(n,1);
    vector<int> dp2(n,1);
    int maxLen = 1;
    for (int i = 1; i < n; i++) {
        for (int j = i-1; j < i; j++) {
            if (nums1[i] >= nums1[j])
                dp1[i] = max(dp1[i], dp1[j] + 1);
            if (nums2[i] >= nums2[j])
                dp2[i] = max(dp2[i], dp2[j] + 1);
            if (nums1[i] >= nums2[j])
                dp1[i] = max(dp1[i], dp2[j] + 1);
            if (nums2[i] >= nums1[j])
                dp2[i] = max(dp2[i], dp1[j] + 1);
        }
        maxLen=max(maxLen,max(dp1[i], dp2[i]));
    }
    return maxLen;    
   }
};