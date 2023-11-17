// https://leetcode.com/problems/length-of-the-longest-alphabetical-continuous-substring

class Solution {
public:
    int longestContinuousSubstring(string s) {
     int cnt=1,ans=1;
       
        for(int i=1;i<s.length();i++){
        if(s[i]-s[i-1]==1){
            int j=i;
            while(s[j]-s[j-1]==1&&j<s.length()){
                ans++;
                j++;
            }
            cnt=max(cnt,ans);
            ans=1;
        }
        
        }
        
        
        return cnt;
    }
};