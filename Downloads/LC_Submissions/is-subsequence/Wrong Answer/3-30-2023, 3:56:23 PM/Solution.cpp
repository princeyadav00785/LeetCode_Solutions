// https://leetcode.com/problems/is-subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int k=0;
       
        for(int i=0;i<s.size();i++){
             int fnd=0;
            for(int j=k;j<t.size();j++){
                if(s[i]==t[j]){
                    k=j;
                    fnd=1;
                }
                if(i!=s.size()-1&&j==t.size()-1){
                    return false;
                }
                if(fnd==0){return false;}
            }
        }
        
        return true;
    }
};