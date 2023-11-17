// https://leetcode.com/problems/remove-letter-to-equalize-frequency

class Solution {
public:
    map<char,int>mp;
    set<int>s;
    bool equalFrequency(string word) {
        for(int i=0;i<word.length();i++){
            mp[word[i]]++;
            
        }
      for(auto x:mp)s.insert(x.second);
        if(s.size()>2)return false;
        if(s.size()==1){
            int a=0;
            for(auto x:s)a=x;
            if(a>1)return false;
            if(a==1)return true;
        }
    map<int,int>mp2;
        for(auto x:mp){
            mp2[x.second]++;
        }
        
        vector<pair<int,int>>v;
     
        for(auto x:mp2){
            v.push_back({x.first,x.second});
         
        }
        sort(v.begin(),v.end());
        if(v[1].first-v[0].first==1&&v[1].second==1)return true;
        return false;
        
    }
};