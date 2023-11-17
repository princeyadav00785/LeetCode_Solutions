// https://leetcode.com/problems/palindrome-partitioning-ii

class Solution {
public:
    int fxn(string s,int i,int j){
        if(i>=j)return 0;
        if(ispalindrome(s,i,j))return 0;
        int mnm = INT_MAX;
        for(int k=i;k<=j-1;k++){
           long long temp= fxn(s,i,k)+fxn(s,k+1,j)+1;
            if(temp<mnm)mnm=temp;
        }
        return mnm;
        
    }
    bool ispalindrome(string s, int i, int j){
        while(i<=j){
            if(s[i++]!=s[j--])return false;
        }
        return true;
    }
    
    int minCut(string s) {
        int i=0,j=s.size()-1;
        int n= s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return fxn(s,i,j);
    }
};