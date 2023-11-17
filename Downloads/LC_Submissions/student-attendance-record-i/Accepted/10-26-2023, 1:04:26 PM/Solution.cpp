// https://leetcode.com/problems/student-attendance-record-i

class Solution {
public:
    bool checkRecord(string s) {
        int cnt=0,late=0;
        if(s[0]=='A')cnt++;
        for(int i=1;i<s.length();i++){
            if(s[i]=='A')cnt++;
            if(s[i]==s[i-1]&&s[i]=='L')late++;
            else{late=0;}
            if(cnt>=2)return false;
            if(late>=2)return false;
        }
        return true;
    }
};