// https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-i

class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int i=0;
        for(int i=0;i<4;i++){
            if(s1[i]==s2[i])continue;
            else if(i+2<4&&s1[i]==s2[i+2]){
                swap(s2[i],s2[i+2]);
            }else if(i-2>=0&&s1[i]==s2[i-2])swap(s2[i],s2[i-2]);
            else return 0;
        }
        return 1;
    }
};