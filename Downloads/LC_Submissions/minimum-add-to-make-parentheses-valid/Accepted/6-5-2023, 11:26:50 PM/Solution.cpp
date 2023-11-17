// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid

class Solution {
public:
    int minAddToMakeValid(string s) {   
        stack<char>st;
        for(int i=0;i<s.length();i++){
            // st.push(s[i]);
            if(st.size()==0){
                st.push(s[i]);
            }else {
                if(s[i]==')'&&st.top()=='('){
                    st.pop();
                }else if(s[i]=='('&&st.top()==')'){
                      st.push(s[i]);
                }else {
                      st.push(s[i]);
                }
            }
        }
        return st.size();
        //      stack<char> st;
        // int count=0;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]==')'){
        //         if(st.empty())
        //             count++;
        //         else if(st.top()=='(')
        //               st.pop();
        //         else
        //             st.push(s[i]);
        //     }
        //     else if(s[i]=='(')
        //         st.push(s[i]);
        // }
        // return st.size()+count;
    }
};