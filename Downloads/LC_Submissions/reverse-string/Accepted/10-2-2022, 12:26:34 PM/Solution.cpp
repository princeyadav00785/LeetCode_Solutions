// https://leetcode.com/problems/reverse-string

class Solution {
public:
    void reverseString(vector<char>& s) {
        int s1 =0;
        int h = s.size()-1;
        while(s1<=h){
            swap(s[s1],s[h]);
            s1++;
            h--;
        }
    }
};