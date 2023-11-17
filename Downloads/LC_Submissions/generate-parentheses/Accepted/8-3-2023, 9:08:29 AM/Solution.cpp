// https://leetcode.com/problems/generate-parentheses

class Solution {
public:
    vector<string>ans;
    void fxn(int n , int m ,string s){
    if(m==0&&n==0){ans.push_back(s);}
        if(n>0){fxn(n-1,m+1,s+"(");}
        if(m>0){fxn(n,m-1,s+")");}
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        fxn(n,0,s);
            return ans;
        
    }
};