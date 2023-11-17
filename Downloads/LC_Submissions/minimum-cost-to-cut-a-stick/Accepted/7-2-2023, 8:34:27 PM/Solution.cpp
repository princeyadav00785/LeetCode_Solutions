// https://leetcode.com/problems/minimum-cost-to-cut-a-stick

class Solution {
public:
    int fxn(int i,int j,vector<int>&cuts,vector<vector<int>>&dp){
        if(i>j)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int mnm=INT_MAX;
        for(int k=i;k<=j;k++){
            int temp=  cuts[j+1]-cuts[i-1]+fxn(i,k-1,cuts,dp)+fxn(k+1,j,cuts,dp);
            mnm= min(mnm,temp);
            }
        return dp[i][j] =mnm;
    }
    
    
    int minCost(int n, vector<int>& cuts) {
                  int i=0,j=cuts.size();  
        vector<vector<int>>dp(j+1,vector<int>(j+1,-1));
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        sort(cuts.begin(),cuts.end());
    
      return   fxn(i+1,j,cuts,dp);
    }
};