// https://leetcode.com/problems/minimum-time-to-make-rope-colorful

class Solution {
public:
    int minCost(string s, vector<int>& v) {
     
        int t=0;
        for(int i=0;i<s.length()-1;i++){
        
            if(s[i]==s[i+1]){
                t+=min(v[i],v[i+1]);
            }
        }
        
        
        
       return t; 
    }
};