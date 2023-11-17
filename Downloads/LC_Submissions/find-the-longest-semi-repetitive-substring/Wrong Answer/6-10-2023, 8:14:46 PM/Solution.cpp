// https://leetcode.com/problems/find-the-longest-semi-repetitive-substring

class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        map<char,int>mp;
        int a=0;
        int cnt=0;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            
            if(mp[s[i]]>2){
                break;
            }else if(a==1&&mp[s[i]]==2){break;}
            cnt++;
            if(mp[s[i]]==2)a=1;
        }
        return cnt;
    }
};