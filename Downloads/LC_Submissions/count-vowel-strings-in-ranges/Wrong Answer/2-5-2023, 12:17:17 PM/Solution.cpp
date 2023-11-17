// https://leetcode.com/problems/count-vowel-strings-in-ranges

class Solution {
    public:
    int cntr(int a,int b , vector<string>&words){
            int cnt =0;
        for(int i=a;i<=b;i++){
        
            if(words[i][words[i].size()-1]=='a'||words[i][words[i].size()-1]=='e'||words[i][words[i].size()-1]=='i'||words[i][words[i].size()-1]=='o'||words[i][words[i].size()-1]=='u'){
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