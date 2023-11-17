// https://leetcode.com/problems/excel-sheet-column-title

class Solution {
public:
    map<char,int>mp;
    map<int,char>mp2;
    string convertToTitle(int n) {
        char c= 'A';
        string ans="";
        for(int i=0;i<26;i++){
            mp[c]=c-'A'+1;
            c++;
        }
        for(auto x:mp){
            mp2[x.second]=x.first;
        }
        while(n){
            int a=0;
            if(n>26){
                a=n/26;
                n=n-a*26;
            }else {a=n;
                  n=0;}
            ans+=mp2[a];
        }
        return ans;
    }
};