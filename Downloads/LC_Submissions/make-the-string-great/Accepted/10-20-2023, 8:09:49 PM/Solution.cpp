// https://leetcode.com/problems/make-the-string-great

class Solution {
public:
    string makeGood(string s) {
       while(true){
          
          stack<char>st;
           int a=s.size();
           st.push(s[0]);
           int ind=0;
           for(int i=1;i<s.size();i++){
           if(s[i]-st.top()==32||st.top()-s[i]==32){
               s.erase(s.begin()+i);
               s.erase(s.begin()+ind);
               st.pop();
           }    
               ind=i;
               st.push(s[i]);
           }
           if(a==s.size())
           return s;
                  }
        return "";
    }
};

     