// https://leetcode.com/problems/string-to-integer-atoi

class Solution {
public:
    int myAtoi(string s) {
        int ans =0;
        int neg=0;
        vector<int> v;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='1'||s[i]=='2'||s[i]=='3'|| s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'||s[i]=='0'){
                v.push_back(s[i]-'0');
            }
            if(s[i]=='-'){
                neg=1;
            }
        }
        
        for(int i=0;i<v.size();i++){
            ans += v[i]*pow(10,i);
        }
        if(neg==0){
            return ans;
        }else return -1*ans;
    }
};