// https://leetcode.com/problems/calculate-digit-sum-of-a-string

class Solution {
public:
    string digitSum(string s, int k) {
    
        while(s.length()>k){
            string temp="";
            int cnt=0,sum=0;
            for(int i=0;i<s.length();i++){
                cnt++;
                sum+=s[i]-'0';
                if(cnt==3||i==s.length()-1){
                  temp+= to_string(sum);
                    sum=0;
                    cnt=0;
                }
            }
            s=temp;
        }
        return s;
    }
};