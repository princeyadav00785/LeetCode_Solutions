// https://leetcode.com/problems/long-pressed-name

class Solution {
public:
    bool isLongPressedName(string s, string t) {
        int a=s.size()-1,b=t.size()-1;
        if(a>b)return false;
        if(a==b){
            if(s==t)return true;
            else false;
        }
        int k=0,l=0;
        while(l<b&&k<a){
            if(s[k]==t[l]){l++;k++;}else l++;
        }
        if(k==a)return true;
        else
        return false;
    }
};