// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        
        for (int i=0;i<s.length();i++){
            if(st.size()!=0&&s[i] ==st.top()){
                st.pop();
            }
            else st.push(s[i]);
        }
        string ans="";
        while(st.size()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};