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
        // cout<<n<<" "<<m;
        int c=0,d=0;
        if(mp1.size()==mp2.size()){return true;}
        if(abs(n-m )>1){return false;}
         if(abs(n-m)==1){
         if(mp1.size()>mp2.size()){
             for(auto y:mp2){
                 if(y.second>1){
                     c=1;
                 }
             }
             for(auto x:mp1){
                 if(x.second>1&&mp2[x.first]==0&&c==1){return true;}
             }
         }
          if(mp2.size()>mp1.size()){
                for(auto y:mp1){
                 if(y.second>1){
                     d=1;
                 }
             }
             for(auto x:mp2){
                 if(x.second>1&&mp1[x.first]==0&&d==1){return true;}
             }
         }
         
         }
        return false;
    }
};