// https://leetcode.com/problems/permutation-in-string

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int n=s1.length(),m=s2.length();
        sort(s1.begin(),s1.end());
        // cout<<s1<<" ";
        for(int i=0;i<=m-n;i++){
            int l=n,j=i;
            string t="";
            while(l--){
                t+=s2[j++];
            }
            
            sort(t.begin(),t.end());
            // cout<<t<<" ";
            if(t==s1)return true;
        }
        return false;
    }
};