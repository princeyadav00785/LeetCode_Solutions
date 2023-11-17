// https://leetcode.com/problems/final-value-of-variable-after-performing-operations

class Solution {
    public: 
    int fxn(string s){
        int a=0;
        for(int i=0;i<s.length();i++){
       if(s[0]=='+'||s[s.length()-1]=='+'){
           a=1;
       }
          if(s[0]=='-'||s[s.length()-1]=='-'){
           a =-1;
       }
        }
        return a;
    }
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans =0;
        for(int i=0;i<operations.size();i++){
            ans += fxn(operations[i]);
        }
        return ans;
    }
};