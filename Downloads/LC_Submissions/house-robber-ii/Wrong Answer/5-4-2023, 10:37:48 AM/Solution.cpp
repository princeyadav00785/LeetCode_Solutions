// https://leetcode.com/problems/house-robber-ii

class Solution {
public:
    int fxn(vector<int>nums,int n){
      // vector<int> dp(nums.size(),-1);
        // dp[0]=nums[0];
        int prev2= nums[0];
        int prev= max(nums[0],nums[1]);
        int curr=0;
        // dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            // dp[i]=max(dp[i-1],nums[i]+dp[i-2]);
            curr = max(prev,nums[i]+prev2);
            prev2= prev;
            prev=curr;
        }
        
        // return dp[nums.size()-1];
        return curr;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1){return nums[0];}
        if(nums.size()==2){return max(nums[0],nums[1]);}
        
       vector<int> v1;
        vector<int>v2;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(i!=0){v1.push_back(nums[i]);}
            if(i!=nums.size()-1){v2.push_back(nums[i]);}
        }
        
    
        return max(fxn(v1,nums.size()-1),fxn(v2,nums.size()-1));
    }
};