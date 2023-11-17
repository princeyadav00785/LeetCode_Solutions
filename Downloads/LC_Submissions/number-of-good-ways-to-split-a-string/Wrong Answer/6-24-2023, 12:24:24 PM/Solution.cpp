// https://leetcode.com/problems/number-of-good-ways-to-split-a-string

class Solution {
public:
    int numSplits(string s) {
        int n = s.length();
      map<char,int>mp2;
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            mp2[s[i]]++;
            v[i]=mp2.size();
        }
        int l= v[n-1];
        int ans=0;
        for(auto x:v){
            if(x==l/2)ans++;
        }
        return ans;
    }
};