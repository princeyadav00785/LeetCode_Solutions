// https://leetcode.com/problems/find-and-replace-pattern

class Solution {
    public:
    vector<int> check(string s){
         unordered_map<char,int>mp;
        vector<int> a2;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            
        }
        for(auto x:mp){
            a2.push_back(x.second);
        }
        return a2;
    }
public:
    
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
         vector<string> ans;
        
       unordered_map<char,int>mp;
        vector<int> a;
         for(int i=0;i<pattern.length();i++){
            mp[pattern[i]]++;
            
        }
        for(auto x:mp){
            a.push_back(x.second);
        }
       
        for(int i=0;i<words.size();i++){
              vector<int> a2=check(words[i]);
            // sort(a.begin(),a.end());
            // sort(a2.begin(),a2.end());
            if(a2==a){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};