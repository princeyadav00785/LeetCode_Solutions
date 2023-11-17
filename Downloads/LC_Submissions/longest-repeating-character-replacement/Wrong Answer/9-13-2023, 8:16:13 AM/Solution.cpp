// https://leetcode.com/problems/longest-repeating-character-replacement

class Solution {
public:
    int characterReplacement(string s, int k) {
       if(s.length()==1)return 1;
        int l=0,cnt=0;
vector<int>v(128);
        for(int r=0;r<s.length();r++){
         cnt=max(cnt,++v[s[r]]);
            if(r-l+1-cnt>k)v[s[r]]--;
        }
        return s.length()-l;
    }
};

       