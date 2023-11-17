// https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram-ii

class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>mp;
         map<char,int>mp2;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            
        }
        for(int i=0;i<t.length();i++){
            if(mp[t[i]])mp[t[i]]--;
            else mp2[t[i]]++;
        }
        int cnt=0;
        for(auto x:mp){
            cnt+=x.second;
        }
         for(auto x:mp2){
            cnt+=x.second;
        }
        
        return cnt;
    }
};