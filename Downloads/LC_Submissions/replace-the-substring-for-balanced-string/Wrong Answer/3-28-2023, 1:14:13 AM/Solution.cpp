// https://leetcode.com/problems/replace-the-substring-for-balanced-string

class Solution {
public:
    int balancedString(string s) {
         map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int cnt=0;
        int n= s.length()/4;
        for(auto x:mp){
            if(x.second-n==1){
                cnt++;
            }
             if(x.second-n==2){
                cnt+=2;
            }
             if(x.second-n==3){
                cnt+=3;
            }
        }
        return cnt;
    }
};