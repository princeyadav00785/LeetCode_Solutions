// https://leetcode.com/problems/add-strings

class Solution {
public:
    string addStrings(string num1, string num2) {
        int a= stoi(num1);
        int b= stoi(num2);
        a= a+b;
        string ans= to_string(a);
        return ans;
    }
};