// https://leetcode.com/problems/length-of-last-word

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = 0;
        int count = 0;
        while(s[i] != '\0'){
            i++;
           if(s[i] == ' '){
               count = 0;
           }else{count++;}
        }
        return count-1;
    }
};