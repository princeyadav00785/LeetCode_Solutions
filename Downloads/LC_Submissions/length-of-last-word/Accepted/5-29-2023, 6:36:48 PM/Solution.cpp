// https://leetcode.com/problems/length-of-last-word

class Solution {
public:
    int ans = 0;
    int temp = 0;
    int lengthOfLastWord(string s) {
        int i = 0;
        while(i<s.size()){
            temp = 0;
            while(i<s.size() and s[i]!=' '){
                temp++;
                i++;
            }
            if(temp!=0)ans = temp;
            i++;
        }
        return ans;
    }
};