// https://leetcode.com/problems/sort-vowels-in-a-string

class Solution {
public:
    string ans="";
    string v="";
    map<char,int>mp;
    map<char,int>newmp;
    string sortVowels(string s) {
        for(int i=0;i<5;i++){
            mp['a']++;
            mp['e']++;
            mp['i']++;
            mp['o']++;
            mp['u']++;
            mp['A']++;
            mp['E']++;
            mp['I']++;
            mp['O']++;
            mp['U']++;
        }
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end()){
                v+=s[i];
                s[i]='0';
            }
            else{newmp[s[i]]=i;}
        }

        sort(v.begin(),v.end());

        int a=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){s[i]=v[a++];}
        }
        return s;
    }
};
// "UpjPbEnOj"