// https://leetcode.com/problems/palindrome-number

class Solution {
   
public:
    bool isPalindrome(int x) {
        bool answer = true;
    int y = x;
        if(x<0){
            answer = false;
        }
        else if(x==0){
            answer = true;
        }
        
        else{
            string s = to_string(x);
            string y = s; 
            reverse(s.begin(),s.end());
            return s==y;
        }
        
            
            
        return answer;
    }
};