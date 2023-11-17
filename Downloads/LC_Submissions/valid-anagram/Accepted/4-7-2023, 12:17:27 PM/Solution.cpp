// https://leetcode.com/problems/valid-anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            if(mp.find(t[i])==mp.end()){
                return false;
            }else if(mp[t[i]]>0){
                mp[t[i]]--;
            }else return false;
        }
        for(auto x:mp){
            if(x.second>0){return false;}
        }
        return true;
    }
};