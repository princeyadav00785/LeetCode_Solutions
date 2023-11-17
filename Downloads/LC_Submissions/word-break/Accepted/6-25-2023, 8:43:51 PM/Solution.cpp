// https://leetcode.com/problems/word-break

class Solution {
public:
    bool wordBreak(string s, vector<string>& d) {
        if(d.size()==0)return false;
        unordered_map<string ,int> mp;
        for(auto  x:d)mp[x]++;
        int n = s.length();
        vector<bool>dp(n+1,false);
        dp[0]=true;
        for(int i=1;i<=n;i++){
            for(int j=i-1;j>=0;j--){
                if(dp[j]){
                    string t= s.substr(j,i-j);
                    if(mp[t]){
                        dp[i]=true;
                        break;
                    }
                }
            }
        }
     
        
     // for(auto x:dp)cout<<x<<" ";
   return dp[n];
    }
};