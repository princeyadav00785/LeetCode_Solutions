// https://leetcode.com/problems/remove-letter-to-equalize-frequency

class Solution {
public:
    map<char,int>mp;
    set<int>s;
    bool equalFrequency(string word) {
        for(int i=0;i<word.length();i++){
            mp[word[i]]++;
            
        }
        
        for(auto x:mp){
            s.insert(x.second);
        }
        
        if(s.size()!=2)return false;
        int f=0;
        for(auto x:s){
            if(x==1){
                f=1;
            }
        }
        if(f==0)return false;
        return true;
    }
};