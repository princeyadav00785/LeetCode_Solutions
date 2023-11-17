// https://leetcode.com/problems/make-number-of-distinct-characters-equal

class Solution {
public:
    bool isItPossible(string s, string t) {
        map<char,int>mp1;
         map<char,int>mp2;
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
        }
        
          for(int i=0;i<t.length();i++){
            mp2[t[i]]++;
        }
        int n= mp1.size(),m=mp2.size();
        if(n==m&&(s.length()!=1&&t.length()!=1))return true;
         if(n==m&&(s.length()==1||t.length()==1))return false;
        
        if(abs(n-m)>1)return false;
        if(n-m==1){
            int f=0;
            vector<char>v;
         for(auto x:mp1){
             if(x.second>1){
                 f=1;
                   v.push_back(x.first);        }
         }
            if(f==0)return false;
            else{
               
                for(int i=0;i<v.size();i++){
                  if(mp2[v[i]]!=0){
                     for(auto x:mp2){
             if(x.second>1){return true;}
         }  
                  }  
                }
                         
                return false;
            }
            
            return false;
        }else if(m-n==1){
            int f=0;
             vector<char>v;
          for(auto x:mp2){
             if(x.second>1){f=1;
                           v.push_back(x.first);}
         }
           if(f==0)return false;
            else{
                for(int i=0;i<v.size();i++){
                  if(mp1[v[i]]!=0){
                  for(auto x:mp1){
             if(x.second>1){return true;}
         }
            }}
            }
            
            return false;  
        }
        return false;
    }
};