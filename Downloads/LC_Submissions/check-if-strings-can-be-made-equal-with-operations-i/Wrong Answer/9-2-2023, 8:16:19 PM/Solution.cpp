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
        
        for(auto x:mp1){
            cout<<x.second<<" ";
            if(abs(mp2[x.first]-x.second)!=2&&abs(mp2[x.first]-x.second)!=0)return false;
        }
        return true;
    }
};