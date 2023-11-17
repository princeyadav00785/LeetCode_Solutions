// https://leetcode.com/problems/palindrome-partitioning-iv

class Solution {
public:

 bool isPalindrome (string & s, int i, int j){
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++; j--;
        }
        return true;
    }
    

    int solve (string & s, int i, int j, vector<int> & dp,vector<int>&store){    
        if(i>=j or isPalindrome(s, i, j)) return 0;
        if(dp[i]!=-1) return dp[i];
        int ans = INT_MAX;
        for(int k=i; k<j; k++){           
            if(isPalindrome(s, i, k)){                         
                int temp = solve (s, k+1, j, dp,store) + 1;
                store.push_back(temp);
                ans = min (ans, temp);
            }
        }
        return dp[i] = ans;
    }
    
       bool checkPartitioning(string s) {
       int n = s.length();        
        vector<int> dp (n+1, -1);   
           vector<int > store;
        int mnm = solve (s, 0, n-1, dp,store); 
           if(mnm>2)return false;
         for(int i=0;i<store.size();i++){
             if(store[i]==2)return true;
         }
           return false;
    }
};