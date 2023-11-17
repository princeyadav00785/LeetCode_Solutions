// https://leetcode.com/problems/consecutive-characters

class Solution {
public:
    int maxPower(string s) {
        int cnt=0,ans=0;
      
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){cnt++;}else cnt=0;
            ans = max(ans,cnt);
        }
       if(ans!=0){return ans+1;}else return 0;
    }
};