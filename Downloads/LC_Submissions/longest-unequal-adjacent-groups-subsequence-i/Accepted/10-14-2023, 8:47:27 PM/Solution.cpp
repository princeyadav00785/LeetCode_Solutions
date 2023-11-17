// https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i

class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& w, vector<int>& g) {
        int prev=-1;
        vector<string>ans;
     for(int i=0;i<w.size();i++){
         if(prev!=g[i]){
             prev=g[i];
             ans.push_back(w[i]);
         }
     }   
       return ans;
    }
};