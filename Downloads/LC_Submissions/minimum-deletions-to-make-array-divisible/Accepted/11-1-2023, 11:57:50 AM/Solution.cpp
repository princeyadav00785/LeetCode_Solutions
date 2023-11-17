// https://leetcode.com/problems/minimum-deletions-to-make-array-divisible

class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numbers) {
        int result = numbers[0]; 
    for (int i = 1; i < numbers.size(); i++) {
        result = std::gcd(result, numbers[i]);
    }
        int ans =-1;
        sort(nums.begin(),nums.end());
        if(result<
           nums[0]) return -1;
        for(int i= 0; i<nums.size();i++){
       if(result %nums[i]==0){
           ans= i;
           break;
       }
        }
        return ans;
    }
};