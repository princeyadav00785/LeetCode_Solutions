// https://leetcode.com/problems/count-asterisks

class Solution {
public:
    int countAsterisks(string s) {
//         int a=0;
//         int cnt=0;
    
//         for(int i=0;i<s.length();i++){
//             cout<<a<<" ";
//             if(s[i]=='|'&&a==0){
//                 a=9;
                
//             }
//               if(s[i]=='|'&&a==9){
//                 a=0;
                
//             }
            
//             if(a==0&&s[i]=='*'){
//                 cnt++;
               
//             }
//         }
        
//         return cnt;
             int bar = 0;
        int count= 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '|') {
                bar++;
            }
            if (bar % 2 == 0 && s[i] == '*') {
                count++;
            }
        }

        return count;
    
    }
};