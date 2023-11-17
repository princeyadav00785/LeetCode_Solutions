// https://leetcode.com/problems/check-if-the-sentence-is-pangram

class Solution {
public:
    bool checkIfPangram(string t) {
        set<char>s;
        for(int i=0;i<t.length();i++){
            s.insert(t[i]);
        }
        if(s.size()==26)return true;
        return false;
    }
};