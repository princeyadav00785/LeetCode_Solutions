// https://leetcode.com/problems/longest-arithmetic-subsequence-of-given-difference

class Solution {
public:
  int longestSubsequence(vector<int>& v, int d) {
        unordered_map<int,int>m;
        int ans=0;
        for(auto &x:v){
            ans=max(ans,m[x-d]+1);
            m[x]=m[x-d]+1;
        }
        return ans;
    }};