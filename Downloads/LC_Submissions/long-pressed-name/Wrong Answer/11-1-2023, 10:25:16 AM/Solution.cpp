// https://leetcode.com/problems/long-pressed-name

class Solution {
public:
    bool isLongPressedName(string n, string t) {
        int a=0,b=0;
        while(a<n.size()&&b<t.size()){
            if(n[a]==t[b]){
                a++;
                b++;
            }else {
                b++;
            }
        }
        if(a==n.size())return true;
        return false;
    }
};