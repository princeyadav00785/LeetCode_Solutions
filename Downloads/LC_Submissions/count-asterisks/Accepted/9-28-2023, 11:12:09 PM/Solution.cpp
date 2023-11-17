// https://leetcode.com/problems/count-asterisks

class Solution {
public:
    int countAsterisks(string s) {
        int cnt=0;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='|')cnt++;
            if(cnt%2==0){
                if(s[i]=='*')ans++;
            }
        }
        return ans;
    }
};