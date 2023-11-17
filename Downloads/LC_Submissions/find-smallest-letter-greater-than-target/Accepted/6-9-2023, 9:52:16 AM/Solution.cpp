// https://leetcode.com/problems/find-smallest-letter-greater-than-target

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char c= letters[0];
        for(auto x:letters){
            if(x-'a'>target-'a'){
                c= x;
                break;
            }
        }
        
        return c;
    }
};