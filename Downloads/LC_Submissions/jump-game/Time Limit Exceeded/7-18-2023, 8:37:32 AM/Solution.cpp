// https://leetcode.com/problems/jump-game

class Solution {
public:
    bool fxn(vector<int>&nums,int i){
        if(i==nums.size()-1){return true;}
        if(nums[i]==0)return false;
        for(int j=1;j<=nums[i];j++){
           if(j<nums.size()&&fxn(nums,j+i))
            return true;
            
        }
        return false;
    }
    
    bool canJump(vector<int>& nums) {
        return fxn(nums,0);
    }
};

  // if(ind==arr.size()-1)return true;
  //       if(arr[ind]==0)return 0;
  //       if(dp[ind]!=-1)return dp[ind];
  //       for(int i=1;i<=arr[ind];i++){ 
  //           if(i<arr.size() and rec(arr,i+ind,dp))
  //          return dp[ind]=true;
  //       }
  //       return dp[ind]=false;
  //   }