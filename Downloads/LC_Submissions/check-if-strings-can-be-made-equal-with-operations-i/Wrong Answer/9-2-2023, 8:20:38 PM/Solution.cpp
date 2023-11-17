// https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-i

class Solution {
public:
    map<char,int>mp1;
    map<char,int>mp2;
    bool canBeEqual(string s, string t) {
        for(int i=0;i<4;i++){
            mp1[s[i]]=i;
            mp2[t[i]]=i;
        }
        int f=0;
        
       for(int i=0;i<4;i++){
           char a= s[i];
           if(f==1)return false;
           if(abs(mp1[a]-mp2[a])==2||abs(mp1[a]-mp2[a])==0){
               f=0;
           }else f=1;
       }
        if(f==1)return false;
        return true;
    }
};