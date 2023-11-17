// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
      stack<char> st;
        for(int i=0;i<s.length();i++){
            if(st.size()==0){
                st.push(s[i]);
            }
            if(s[i]==')'&&st.top()=='('||s[i]==']'&&st.top()=='['||s[i]=='}'&&st.top()=='{'){
                st.pop();
            }
                            st.push(s[i]);
               
        }
               if(st.size()==0){
                   return true;
               }else return false;
    }
             
};