// https://leetcode.com/problems/most-common-word

class Solution {
public:
    string mostCommonWord(string p, vector<string>& b) {
       map<string ,int>mp;
        vector<string>v;
        string s="";
        for(int i=0;i<p.length();i++){
            if(p[i]==' '||p[i]==','||p[i]=='.'){
                if(s!="")
         {   transform(s.begin(), s.end(), s.begin(), ::tolower);
        v.push_back(s);
        s="";}
            }
            else s+=p[i];
        }
         if(s!="")
         {   transform(s.begin(), s.end(), s.begin(), ::tolower);
        v.push_back(s);
        s="";}
        for(int i=0;i<v.size();i++){
            mp[v[i]]++;
        }
        int mxm=0;
        string t="";
        map<string ,int>mp2;
        for(int i=0;i<b.size();i++){
            mp2[b[i]]++;
        }
        for(auto x:mp){
            if(x.second>mxm){
                string ss=x.first;
                if(mp2[ss]==0)
                t= x.first; mxm=x.second;
            }
        }
       return t;
    }
};