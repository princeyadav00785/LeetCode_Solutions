// https://leetcode.com/problems/word-pattern

class Solution {
public:
    vector<string>a;
    vector<string>b;
    map<string,int>mp1;
    map<string ,int >mp2;
    bool wordPattern(string p, string s) {
        for(int i=0;i<p.length();i++){
            string l= "";
            l+=p[i];
            a.push_back(l);
        }
        // string k="";
        // for(int i=0;i<s.length();i++){
        //     if(s[i]!=' '){
        //         k+=s[i];
        //     }else if((s[i]==' ') || (i==s.length()-1)){
        //      if(k.size()!=0) {  b.push_back(k);
        //         k="";}
        //     }
            // cout<<k<<" "<<i;
        // }
        string word;
        stringstream iss(s);
        while (iss >> word)
            b.push_back(word);
        // for(int i=0;i<b.size();i++)cout<<b[i]<<" ";
        cout<<a.size()<<b.size();
        if(a.size()!=b.size())return false;
        vector<int>v(a.size(),0);
        vector<int>v2(a.size(),0);
        for(int i=0;i<a.size();i++){
            if(mp1.find(a[i])!=mp1.end()){
                v[i]=mp1[a[i]];
            }else{
                mp1[a[i]]= i;
                v[i]=i;
            }
        }
         for(int i=0;i<a.size();i++){
            if(mp2.find(b[i])!=mp2.end()){
                v2[i]=mp2[b[i]];
            }else{
                mp2[b[i]]= i;
                v2[i]=i;
            }
        }
        
        return v==v2;
    }
};