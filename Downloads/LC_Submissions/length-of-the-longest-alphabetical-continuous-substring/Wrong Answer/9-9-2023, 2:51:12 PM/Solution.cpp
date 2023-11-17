// https://leetcode.com/problems/length-of-the-longest-alphabetical-continuous-substring

class Solution {
public:
    int longestContinuousSubstring(string s) {
        int cnt=0;
        int i=0,j=0,n=s.length();
        map<char,int>mp;
        while(j<n){
            mp[s[j]]++;

                while(mp[s[j]]>1){
                    mp[s[i++]]--;
                
                }
             cnt=max(cnt,j-i);
             j++;
           
            }
            cnt=max(cnt,j-i);
        
        return cnt;
    }
};