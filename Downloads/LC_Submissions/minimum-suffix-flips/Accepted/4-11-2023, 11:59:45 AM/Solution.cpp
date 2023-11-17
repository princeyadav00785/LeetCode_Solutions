// https://leetcode.com/problems/minimum-suffix-flips

class Solution {
public:
    int minFlips(string s) {
        int cnt=0;
        int a=1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'&&a==1){
               cnt++;
            a=0;}
            if(s[i]=='0'&&a==0){
                cnt++;
                a=1;
            }
            }
        return cnt;
    }
};