// https://leetcode.com/problems/long-pressed-name

class Solution {
public:
    bool isLongPressedName(string n, string t) {
        set<char>st1(n.begin(),n.end());
        set<char>st2(t.begin(),t.end());
        if(st1!=st2){cout<<"bhai"; return false;}
        int a=0,b=0;
        while(a<n.size()&&b<t.size()){
            if(n[a]==t[b]){
                a++;
                b++;
            }else {
                b++;
            }
        }
        cout<<a<<b;
        if(a==n.size()&&b==t.size())return true;
        return false;
    }
};