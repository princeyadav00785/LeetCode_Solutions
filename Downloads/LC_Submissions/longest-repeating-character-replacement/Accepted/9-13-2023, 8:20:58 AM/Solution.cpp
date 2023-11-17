// https://leetcode.com/problems/longest-repeating-character-replacement

class Solution {
public:
    int characterReplacement(string s, int k) {
       if(s.length()==0)return 0;
        int l=0,cnt=0;
vector<int>v(128);
        for(int r=0;r<s.length();r++){
         cnt=max(cnt,++v[s[r]]);
            if(r-l+1-cnt>k)v[s[l++]]--;
        }
        return s.length()-l;
   

    }
};

       