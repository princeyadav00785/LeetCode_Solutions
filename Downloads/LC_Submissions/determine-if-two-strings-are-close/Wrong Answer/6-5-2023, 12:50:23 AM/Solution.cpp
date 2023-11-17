// https://leetcode.com/problems/determine-if-two-strings-are-close

class Solution {
public:
    bool closeStrings(string a, string b) {
        map<char,int>mp1;
        map<char,int>mp2;
        if(a.size()!=b.size()){return false;}
        vector<int> v;
        vector<int> t;
        for(int i=0;i<a.size();i++){
            mp1[a[i]]++;
        }
        for(int i=0;i<b.size();i++){
            mp2[b[i]]++;
        }
        for(auto x:mp1){
            v.push_back(x.second);
        }
          for(auto x:mp2){
            t.push_back(x.second);
        }
        sort(v.begin(),v.end());
        sort(t.begin(),t.end());
        if(v==t){return true;}else return false;
    }
    
};