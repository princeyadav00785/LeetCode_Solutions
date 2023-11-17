// https://leetcode.com/problems/jump-game-ii

class Solution {
public:
    int n;
    int solve(int i, vector<int> &nums)
    {
        if(i == n-1)  
            return 0;
       
        int mini = INT_MAX-1;                       
        for(int j=1; j<=min(n-1 - i, nums[i]); j++) 
        {
            int temp = 1 + solve(i+j, nums); 
            mini = min(mini, temp);          
        }
        
        return mini;  
    }
    
    int jump(vector<int>& nums) 
    {
        n = nums.size();
        
        return solve(0, nums);
    }
};