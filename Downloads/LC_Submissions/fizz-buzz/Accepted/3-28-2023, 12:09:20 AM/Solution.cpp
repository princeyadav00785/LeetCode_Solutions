// https://leetcode.com/problems/fizz-buzz

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i=1;i<=n;i++){
             if(i%3==0&&i%5==0){
              ans.push_back("FizzBuzz");  
            }
            if(i%3==0&&i%5!=0){
              ans.push_back("Fizz");  
            }
            
            if(i%5==0&&i%3!=0){
              ans.push_back("Buzz");  
            }
            if(i%5!=0&&i%3!=0){
                string s= to_string(i);
              ans.push_back(s);  
            }
           
        }
        
        return ans;
        
    }
};