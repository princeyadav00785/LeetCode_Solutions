// https://leetcode.com/problems/circular-sentence

class Solution {
public:
    bool isCircularSentence(string s) {
        int n=s.length();
        char c='\n';
        for(int i=0;i<n-1;i++){
            if(s[i]!=' '&&s[i+1]==' '){
                c=s[i];
            }
            if(i>0){
            if(s[i]!=' '&&s[i-1]==' '){
                if(s[i]!=c){
                    // cout<<c<<" ";
                            return false;}
            }}
        }
        if(s[0]!=s[n-1])return false;
        return true;
    }
};