// https://leetcode.com/problems/split-a-string-in-balanced-strings

class Solution {
public:
    int balancedStringSplit(string s) {
//         stack<char> st;
//         int n= s.length()-1;
//         st.push(s[0]);
//         int cnt=0;
//         int i=1;
//         while(n--){
//             if(st.empty()){
//                 cnt++;
//                 st.push(s[i]);
//             }
//             if(s[i]=='L'&&st.top()=='R'&&st.size()!=0){
//                 st.pop();
                
//             }
//             if(s[i]=='R'&&st.top()=='L'&st.size()!=0){
//                 st.pop();
                
//             }else{
//                 st.push(s[i]);
//             }
     
//                 i++;
//         }
//         return cnt;
        
        int cnt=0;
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(st.empty() || s[i]==st.top()){
                st.push(s[i]);
            }
            else{
                if(!st.empty() && st.top()!=s[i])st.pop();
                if(st.empty())cnt++;
            }

        }
        return cnt;
    }
};