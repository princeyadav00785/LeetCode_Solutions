// https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<int,int>mp;
        if(s.length()==1){return true;}
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int a= mp[s[0]];
        for(auto x:mp){
            if(x.second!=a){return false;}
        }
        return true;
    }
};