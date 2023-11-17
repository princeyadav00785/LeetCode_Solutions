// https://leetcode.com/problems/make-number-of-distinct-characters-equal

class Solution {
public:
    bool isItPossible(string s, string t) {
       map<int,int>mp1;
        map<int,int>mp2;
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
        }
         for(int i=0;i<t.length();i++){
            mp2[t[i]]++;
        }
        int a=0,b=0;
        int n=mp1.size();
        int m=mp2.size();
        if(mp1.size()==mp2.size()){return true;}
        if(abs(n-m )>1){return false;}
         if(abs(n-m)==1){
         if(mp1.size()>mp2.size()){
             for(auto x:mp1){
                 if(x.second>1&&mp2[x.second]==0){return true;}
             }
         }
          if(mp2.size()>mp1.size()){
             for(auto x:mp2){
                 if(x.second>1&&mp1[x.second]==0){return true;}
             }
         }
         
         }
        return false;
    }
};