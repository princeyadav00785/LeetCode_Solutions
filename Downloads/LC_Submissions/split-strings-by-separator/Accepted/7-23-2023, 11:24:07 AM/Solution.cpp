// https://leetcode.com/problems/split-strings-by-separator

class Solution {
public:
    vector<string> fxn(string s,char c){
        vector<string>a;
        string t="";
        for(int i=0;i<s.length();i++){
            
            if(s[i]!=c){t+=s[i];}
            else {
                a.push_back(t);
                t="";
            }
        }
        if(t!="")    a.push_back(t);
        return a;
    }
    vector<string> splitWordsBySeparator(vector<string>& words, char c) {
        
        vector<string>ans;
        for(int i=0;i<words.size();i++){
         vector<string> v = fxn(words[i],c);
            for(int i=0;i<v.size();i++){
                string t= v[i];
                if(t.size()!=0)ans.push_back(t);
            }
        }
        return ans;
    }
};