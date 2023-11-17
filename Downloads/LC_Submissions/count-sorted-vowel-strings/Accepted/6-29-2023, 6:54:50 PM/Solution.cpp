// https://leetcode.com/problems/count-sorted-vowel-strings

class Solution {
public:
    int countVowelStrings(int n) {
        long long int ans =  (n + 1) * (n + 2) * (n + 3) * (n + 4) / 24;
        return ans;
    }
};