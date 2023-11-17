// https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value

class Solution {
public:
    map<char,int>mp;
    bool digitCount(string num) {
        for(int i=0;i<num.length();i++){
            mp[num[i]]++;
        }
        for(int i=0;i<num.length();i++){
            int a= num[i]-'0';
            cout<<a<<" ";
            char c= i+'0';
            if(a!=mp[c])return false;
        }
        return true;
    }
};