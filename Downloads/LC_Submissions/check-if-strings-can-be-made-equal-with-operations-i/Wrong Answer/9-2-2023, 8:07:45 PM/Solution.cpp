// https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-i

class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int cnt=0;
        for(int i=0;i<4;i++){
            if(s1[i]!=s2[i]){
                if(i+2<4){
                    if(s1[i+2]!=s2[i]||s2[i+2]!=s1[i])return false;
                }
            }
        }
        // if(cnt==2||cnt==0)return true;
        return true;
    }
};