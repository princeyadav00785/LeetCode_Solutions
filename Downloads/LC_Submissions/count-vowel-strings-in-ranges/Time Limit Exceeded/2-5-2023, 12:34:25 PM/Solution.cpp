// https://leetcode.com/problems/count-vowel-strings-in-ranges

class Solution {
    public:
    bool isvowel(string s){
        int n = s.size()-1;
        if((s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u')&&(s[n]=='a'||s[n]=='e'||s[n]=='i'||s[n]=='o'||s[n]=='u')){
            return true;
        }else  return false;
    }
    public:
    int cntr(int a,int b , vector<string>&words){
            int cnt =0;
        for(int i=a;i<=b;i++){
        
            if(isvowel(words[i])==true){
                cnt++;
            }
        }
        return cnt;
    }
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {

        vector<int> ans ;
        int a=0;
        for(int i=0;i<queries.size();i++){
         a=cntr(  queries [i][0] ,queries[i][1] , words  );
             ans.push_back(a);
        }
        return ans;
    }
   
};