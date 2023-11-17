// https://leetcode.com/problems/plates-between-candles

class Solution {
public:
   int fxn(string s, int a, int b){
       int flag=0,cnt=0,c=0;
       for(int i=a;i<b+1;i++){
           if(s[i]=='|'){flag=1;}
           if(flag==1&&s[i]=='*'){
               c++;
           }
           if(flag==1&&s[i]=='|'){
               cnt+=c;
               c=0;
           }
       }
       return cnt;
   }
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        vector<int> ans;
          for(int i=0;i<queries.size();i++){
            ans.push_back(fxn(s,queries[i][0],queries[i][1]));
        }
        return ans;
    }
};