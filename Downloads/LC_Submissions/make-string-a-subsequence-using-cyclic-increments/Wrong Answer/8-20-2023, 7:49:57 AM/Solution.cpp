// https://leetcode.com/problems/make-string-a-subsequence-using-cyclic-increments

class Solution {
public:
    map<char,int>mp1;
    map<char,int>mp2;
    bool canMakeSubsequence(string s, string t) {

        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            mp2[t[i]]++;
        }
        for(int i=0;i<t.length();i++){
            if(t[i]!='a'){
                if(mp1[t[i]]>0){
                   mp1[t[i]]--; 
                }else if(mp1[t[i]-1]>0){
                    mp1[t[i]-1]--;
                }else return false;
            }else{
                char c='z';
                char d='a';
                if(mp1[c]>0){
                    mp1[c]--;
                }else if(mp1[d]>0){
                    mp1[d]--;
                } else return false;
            }
        }
        return true;
    }
};