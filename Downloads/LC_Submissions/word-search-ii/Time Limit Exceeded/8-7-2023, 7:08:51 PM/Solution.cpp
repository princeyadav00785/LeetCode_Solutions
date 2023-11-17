// https://leetcode.com/problems/word-search-ii

class Solution {
public:
    
       bool fxn(vector<vector<char>>& v, string w, int a, int i, int j) {
    if (i < 0 || j < 0 || i >= v.size() || j >= v[0].size() || v[i][j] != w[a])
        return false;

    if (a == w.size() - 1)
        return true;

    char c = v[i][j];
    v[i][j] = '!'; // Mark the current cell as visited

    bool m = fxn(v, w, a + 1, i + 1, j); // Down
    bool b = fxn(v, w, a + 1, i - 1, j); // Up
    bool l = fxn(v, w, a + 1, i, j + 1); // Right
    bool d = fxn(v, w, a + 1, i, j - 1); // Left

    v[i][j] = c; // Restore the original character

    return m || b || l || d;
}
    vector<string> findWords(vector<vector<char>>& nums, vector<string>& v) {
         
        set<string>ams;
        for(int l=0;l<v.size();l++){
            string s=v[l];
              for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[0].size();j++){
                if(nums[i][j]==s[0]){
                    if(fxn(nums,s,0,i,j))ams.insert(s);
                }
            }
        }
        }
        vector<string> ans(ams.begin(),ams.end());
        return ans;
    }
};