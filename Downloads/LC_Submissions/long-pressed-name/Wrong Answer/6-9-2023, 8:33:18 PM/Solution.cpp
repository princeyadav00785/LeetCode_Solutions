// https://leetcode.com/problems/long-pressed-name

class Solution {
public:
    bool isLongPressedName(string s, string t) {
           if(s.size()==t.size()){
            if(s==t){return true;}
            else return false;
        }
        int a=s.size()-1,b=t.size()-1;
        if(a>b)return false;
        
     
        int k=0,l=0;
        while(l<b&&k<a){
            if(s[k]==t[l]){l++;k++;}else l++;
        }
        cout<<k;
        if(k==a&&l==b)return true;
        else
        return false;
    }
};