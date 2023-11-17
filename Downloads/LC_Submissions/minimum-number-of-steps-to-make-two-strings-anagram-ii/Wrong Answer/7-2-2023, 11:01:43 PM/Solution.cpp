// https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram-ii

class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            
        }
        for(int i=0;i<t.length();i++){
            if(mp[t[i]])mp[t[i]]--;
            else mp[t[i]]++;
        }
        int cnt=0;
        for(auto x:mp){
            cnt+=x.second;
        }
        return cnt;
    }
};