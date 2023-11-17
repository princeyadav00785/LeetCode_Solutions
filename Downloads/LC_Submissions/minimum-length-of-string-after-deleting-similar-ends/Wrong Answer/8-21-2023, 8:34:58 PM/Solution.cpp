// https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends

class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.length()-1;
        while(i<=j){
            char a= s[i],b=s[j];

            if(a==b){            while(s[i]==a){i++;}
            while(s[j]==b)j--;}
            else break;
            
        }
        cout<<i<<" "<<j<<endl;
        if(i>j)return 0;
        else
        return j-i+1;
    }
};