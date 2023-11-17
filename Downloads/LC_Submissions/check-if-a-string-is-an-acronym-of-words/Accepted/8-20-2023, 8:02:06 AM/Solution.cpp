// https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string t="";
        for(int i=0;i<words.size();i++){
            t+=words[i][0];
        }
        if(t==s){return true;}
        else return false;
    }
};