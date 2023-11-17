// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
      stack<char> st;
//         for(int i=0;i<s.length();i++){
//             if(st.size()==0){
//                 st.push(s[i]);
//             }
//             if(s[i]==')'&&st.top()=='('||s[i]==']'&&st.top()=='['||s[i]=='}'&&st.top()=='{'){
//                 st.pop();
//             }else
//                             st.push(s[i]);
               
//         }
//                if(st.size()==0){
//                    return true;
//                }else return false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }else {
                if(st.empty()){return false;}
                if(s[i]==')'&&st.top()=='('){
                    st.pop();
                }
                else  if(s[i]==']'&&st.top()=='['){
                    st.pop();
                }
                else if(s[i]=='}'&&st.top()=='{'){
                    st.pop();
                }else return false;
            }
        }
        
        if(st.empty()){
            return true;
        }else return false;
        
    }
             
};