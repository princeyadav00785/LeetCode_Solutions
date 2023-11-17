// https://leetcode.com/problems/longest-common-prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       sort(strs.begin(),strs.end());
        string ans ="";
        int n= strs[0].length();
        int i=0;
        string s =strs[0];
        string t= strs[strs.size()-1];
        while(n--){
            if(s[i]==t[i]){
                ans =ans + s[i];
            }else break;
            i++;
        }
        
        return ans;
    }
};