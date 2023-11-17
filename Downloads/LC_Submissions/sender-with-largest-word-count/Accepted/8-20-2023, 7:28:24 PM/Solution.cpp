// https://leetcode.com/problems/sender-with-largest-word-count

class Solution {
public:
    int cnt(string s){
        int ans=0;
        for(int i=0;i<s.length();i++){
            while(i<s.length()&&s[i]!=' '){
                i++;
            }
            ans++;
        }
        
        return ans;
    }
    map<string,int>mp;
    string largestWordCount(vector<string>& m, vector<string>& s) {
        for(int i=0;i<m.size();i++){
            mp[s[i]]+=cnt(m[i]);
        }
        int mxm=0;
        for(auto x:mp){
            if(x.second>mxm){mxm=x.second;}
        }
        string ans="";
        for(auto x:mp){
            if(x.second==mxm)ans=x.first;
        }
     return ans;
    }
};