// https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses

class Solution {
public:
 stack<int>st;
    string reverseParentheses(string s) {
       
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')st.push(i+1);
             else if(s[i]==')'){
                int ind=st.top();
                st.pop();
                reverse(s.begin()+ind,s.begin()+i);
            }
        }
        string ans="";
        for(auto x :s){
            if(x!='('&&x!=')')ans.push_back(x);
        }
        return ans;
    }
};