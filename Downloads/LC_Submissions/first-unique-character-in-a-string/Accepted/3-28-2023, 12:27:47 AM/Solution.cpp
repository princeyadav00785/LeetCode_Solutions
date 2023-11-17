// https://leetcode.com/problems/first-unique-character-in-a-string

class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<s.length();i++)
        {
            if(mp.find(s[i])!=mp.end()&&mp[s[i]]==1){
              
                 return i;
            }
           
        }
        
        return -1;
    }
};