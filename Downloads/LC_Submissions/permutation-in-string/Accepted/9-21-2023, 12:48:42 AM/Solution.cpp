// https://leetcode.com/problems/permutation-in-string

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int n=s1.length(),m=s2.length();
        map<char,int>mp;
        for(int i=0;i<n;i++)mp[s1[i]]++;
      
        for(int i=0;i<=m-n;i++){
            int l=n,j=i;
            string t="";
             map<char,int>mp1=mp;
            while(l--){
                mp1[s2[j++]]--;
            }
            int f=1;
            for(auto x:mp1)if(x.second!=0)f=0;
           if(f==1)return true;
        }
        return false;
    }
};