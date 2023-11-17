// https://leetcode.com/problems/longest-substring-without-repeating-characters

class Solution {
public:
    
    
//     a b c a d e f g h 
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;
        int cnt =0;
        int ans =0;
        for(int i=0;i<s.length();i++){
             
            for(int j=i;j<s.length();j++){
                if(mp.find(s[j])==mp.end()){
                mp[s[j]]++;
                cnt++;
            }else {
                cnt =0;
                // cnt++;
                // mp.clear();
                // mp[s[i]]++;
                    break;
            }
            ans = max(ans ,cnt);
            }
        }
        return ans;
    }
};