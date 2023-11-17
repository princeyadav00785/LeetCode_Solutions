// https://leetcode.com/problems/removing-stars-from-a-string

class Solution {
public:
    string removeStars(string s) {
        stack<int>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='*'){
                st.pop();
            }
          else  st.push(s[i]);
            
        }
        string ans = "";
        while(st.size()){
            char c= st.top();
            ans.push_back(c);
            st.pop();
        }
        reverse (ans.begin(),ans.end());
        return ans;
    }
};