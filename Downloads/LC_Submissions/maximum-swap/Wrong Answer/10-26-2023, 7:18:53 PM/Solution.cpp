// https://leetcode.com/problems/maximum-swap

class Solution {
public:
    int maximumSwap(int num) {
        
        string s= to_string(num);
        int n= s.length();
        int a=1;
        for(int i=0;i<n-1;i++){
            if(a<1)break;
         for(int j=i+1;j<n;j++){
            if(s[j]>s[i]){
                char c=s[i];
                s[i]=s[j];
                s[j]=c;
                a=0;
            }
         }
        }
        
        int ans= stoi(s);
        return ans;
    }
};