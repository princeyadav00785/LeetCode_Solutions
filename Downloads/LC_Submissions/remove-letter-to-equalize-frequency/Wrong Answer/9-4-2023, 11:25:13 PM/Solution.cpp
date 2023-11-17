// https://leetcode.com/problems/remove-letter-to-equalize-frequency

class Solution {
public:
    map<char,int>mp;
    set<int>s;
    bool equalFrequency(string word) {
        for(int i=0;i<word.length();i++){
            mp[word[i]]++;
            
        }
         vector<int>v;
        for(auto x:mp){
            v.push_back(x.second);
        }
       
         
        sort(v.begin(),v.end());
        int n= v.size();
        v[n-1]-=1;
        for(int i=0;i<n;i++){
            if(v[i]!=0)
            s.insert(v[i]);
        }
        if(s.size()==1)return true;
        return false;
    }
};