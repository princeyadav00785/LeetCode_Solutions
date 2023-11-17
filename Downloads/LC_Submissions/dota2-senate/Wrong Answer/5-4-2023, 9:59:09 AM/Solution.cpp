// https://leetcode.com/problems/dota2-senate

class Solution {
public:
    string predictPartyVictory(string s) {
 int r=0,d=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){r++;}
            else d++;
        }
        string a= "Radiant",b= "Dire";
        if(r==d){if(s[0]=='R'){return a;}else return b;}
        if(r>d){return a;}else return b;
    }
};