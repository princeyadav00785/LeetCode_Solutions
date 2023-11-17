// https://leetcode.com/problems/custom-sort-string

class Solution {
public:
    string customSortString(string o, string s) {
        map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
        string ans="";
        for(int i=0;i<o.size();i++){
            if(mp[o[i]]){
                ans+=o[i];
                mp[o[i]]--;
            }
        }
        for(auto x:mp){
            int t=x.second;
            while(t--){
              ans+=x.first;  
            }
        }
        return ans;
        
    }
};