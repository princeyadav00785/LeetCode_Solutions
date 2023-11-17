// https://leetcode.com/problems/shortest-common-supersequence

class Solution {
public: int dp[1001][1001];
    void lcs(string s, string t, int n , int m){
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0||j==0){dp[i][j]=0;}
              else { if(s[i-1]==t[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);}
            }
        }
    }
    
    string print(string s, string t, int n,int m){
        string ans ="";
        int i=n,j=m;
        while(i&&j){
        //     if(dp[i][j]==dp[i-1][j-1]){
        //         ans.push_back(s[i-1]);
        //         i--;j--;
        //     }else if(dp[i][j]==dp[i-1][j]){
        //          ans.push_back(s[i-1]);
        //         i--;
        //     }else { 
        //         ans.push_back(t[j-1]);
        //           j--;}
        // }
       if(s[i-1] == t[j-1])
            {
                
                ans.push_back(s[i-1]); 
                --i;                     
                --j;
            }
            
            
            else if(dp[i][j-1] > dp[i-1][j])
            {
                ans.push_back(t[j-1]);  
                --j;                       
            }
            
            else
            {
                ans.push_back(s[i-1]);  
                --i;                        
            }
        }
        
        while( i > 0)
        {
            ans.push_back(s[i-1]);
            --i;
        }  
        while( j > 0)
        {
            ans.push_back(t[j-1]);
            --j;
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
    
    string shortestCommonSupersequence(string s, string t) {
        lcs(s,t,s.length(),t.length());
        return print(s,t,s.length(),t.length());
        // return s;
    }
};