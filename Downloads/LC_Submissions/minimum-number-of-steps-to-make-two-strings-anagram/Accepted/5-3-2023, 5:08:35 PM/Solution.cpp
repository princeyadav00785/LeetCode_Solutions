// https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram

class Solution {
public:
//     int lcs(string s, string t,int n){
      
        
//         if(s[n-1]==)
//     }
    int minSteps(string s, string t) {
//      sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
      // int a=  lcs(s,t,s.size());
      //   return t.size()-a;
        map<int,int> mp1;
        map<int,int> mp2;
        for(int i=0;i<s.size();i++){
            mp1[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            mp2[t[i]]++;
        }
        int cnt=0;
        for(int i=0;i<t.size();i++){
            if(mp1[t[i]])
            {mp1[t[i]]--;}else 
            {
                cnt++;
            }
        }
        return cnt;
    }
};