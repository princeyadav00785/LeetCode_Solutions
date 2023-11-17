// https://leetcode.com/problems/largest-odd-number-in-string

class Solution {
public:
    string largestOddNumber(string num) {
    int l=0,f=0;
        string ans="";
        for(int i=num.size();i>=0;i--){
            int a= num[i]-'0';
            if(a%2!=0){
                l=i;
                f=1;
                break;
            }
        }
        if(f==0)return ans;
        for(int i=0;i<=l;i++){
            ans+=num[i];
        }
        return ans;
    }
};