// https://leetcode.com/problems/burst-balloons

class Solution {
public:
//     int fxn(int i,int j,vector<int>&nums){
//         if(i>j)return 0;
//         int maxi= INT_MIN;
//         for(int k=i;k<=j;k++){
//             long long temp= nums[i-1]*nums[k]*nums[j+1]+fxn(i,k-1,nums)+fxn(k+1,j,nums);
//             if(maxi<temp)maxi=temp;
//         }
//         return maxi;
        
//     }
    
//     int maxCoins(vector<int>& nums) {
//         nums.push_back(1);
//         nums.insert(nums.begin(),1);
        
//         return fxn(1,nums.size(),nums);
//     }
// };

 int solve(int i,int j,vector<int>&nums,vector<vector<int>>&dp){
        
        if(i > j) return 0;
        
     if(dp[i][j]!=-1)return dp[i][j];
       int maxi = INT_MIN;
        
        for(int ind=i;ind<=j;ind++){
            
           int cost = nums[i-1]*nums[ind]*nums[j+1] + solve(i,ind-1,nums,dp)
                                                     + solve(ind+1,j,nums,dp);
            
            maxi  = max(maxi , cost);
        }
        return dp[i][j]=maxi;
    }
	int maxCoins(vector<int>& nums) {
        int n = nums.size();
        nums.push_back(1);
        nums.insert(nums.begin(),1);
       vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
       return solve(1,n,nums,dp);
    }
};