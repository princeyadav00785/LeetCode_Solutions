// https://leetcode.com/problems/categorize-box-according-to-criteria

class Solution {
public:
    
    string categorizeBox(long long int length, long long int width,long long int height,long long int mass) {
        int a=0;
        int b=0;
        string ans;
        if(length>=10000||width>=10000||height>=10000||mass>=10000||(length*width*height)>=1000000000){
           a=1;
            
        }
       else if(mass>=100){
           b=1;
           
        }
        if(a==1&&b==1){
             ans = "Both";
        }else if(b==1&&a!=1){
            ans = "Heavy";
        }else if(a==1&&b!=1){
           ans ="Bulky";
        }else if(a!=1&&b!=1){
            ans ="Neither";
        }
        return ans;
    }
};