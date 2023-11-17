// https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts

class Solution {
public:
    string generateTheString(int n) {
        string s="";
        if(n%2==0){
            for(int i=0;i<n-1;i++){
                s+='a';
            }
            s+='b';
        }else {
            while(n--)s+='a';
        }
        return s;
    }
};