// https://leetcode.com/problems/make-string-a-subsequence-using-cyclic-increments

class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
int n= s.size();
        int m =t.size();
        int i=0,j=0;
        while(i<n&&j<m){
            if(s[i]==t[j]||t[j]-s[i]==1||(s[i]=='z'&&t[j]=='a')){
                i++;j++;
                
            }else i++;
        }
        return j==m?1:0;
    }
};