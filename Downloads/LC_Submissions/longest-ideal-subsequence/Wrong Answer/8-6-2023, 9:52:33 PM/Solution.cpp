// https://leetcode.com/problems/longest-ideal-subsequence

class Solution {
public:
    int longestIdealString(string s, int k) {
        vector<int>dp(s.length(),1);
        int mxm=0;
        for(int i=0;i<s.length();i++){
            for(int j=0;j<i;j++){
                if(abs(s[j]-s[i])<=k){
                    dp[i]=dp[j]+1;
                   
                }
                 
            }
            mxm=max(mxm,dp[i]);
        }
        return mxm;
    }
};

// for (int i = 0; i < s.size(); i++) {
// 			int ind = s[i] - 'a';
// 			int ans = 1;
// 			for (int j = 0; j < 26; j++) {
// 				if (abs(j - ind) <= k) {
// 					ans = max(ans, dp[j] + 1);
// 				}
// 			}
// 			dp[ind] = ans;
// 		}
// 		return *max_element(dp.begin(), dp.end());

// int longestIdealString(string s, int k) {
//         int dp[150] = {}, res = 0;
//         for (auto& i : s) {
//             for (int j = i - k; j <= i + k; ++j)
//                 dp[i] = max(dp[i], dp[j]);
//             res = max(res, ++dp[i]);
//         }
//         return res;
//     }