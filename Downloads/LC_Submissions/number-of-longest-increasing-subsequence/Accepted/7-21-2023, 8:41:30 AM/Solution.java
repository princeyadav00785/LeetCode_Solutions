// https://leetcode.com/problems/number-of-longest-increasing-subsequence

class Solution {
       public int findNumberOfLIS(int[] nums) {
        if (nums == null || nums.length == 0) {
            return 0;
        }
        
        int len = nums.length;
        // dp[i] means the lengh of LIS ending at i
        int[] dp = new int[len];
        Arrays.fill(dp, 1);
        // cnt[i] means # LIS ending at i
        int[] cnt = new int[len];
        
        int ret = 0, max = 1;
        for (int i = 0; i < len; i++) {
            int count = 1;
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    if (1 + dp[j] > dp[i]) {
                        count = cnt[j];
                        dp[i] = 1 + dp[j];
                    } else if (1 + dp[j] == dp[i]) {
                        count += cnt[j];
                    }
                }
            }
            cnt[i] = count;
            
            if (dp[i] > max) {
                ret = count;
                max = dp[i];
            } else if (dp[i] == max) {
                ret += count;
            }
        }
        return ret;
    }
}