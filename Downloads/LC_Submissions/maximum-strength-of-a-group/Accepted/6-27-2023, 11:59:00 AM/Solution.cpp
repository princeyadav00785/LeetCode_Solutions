// https://leetcode.com/problems/maximum-strength-of-a-group

class Solution {
public:
    long long maxStrength(vector<int>& nums) {
       return dfs(nums, 0, 1, 0); 
    } 
   long long  dfs(vector<int>& nums,  int pos , long long  product, int count) {
        if( pos >= nums.size() ) {
            if (count == 0 ){
                return INT_MIN;
            }
            return product ;
        }
        long long include = dfs(nums, pos + 1, product * nums[pos], count + 1);
        long long exclude = dfs( nums, pos + 1, product, count);
        return  max( include, exclude);
    }
};