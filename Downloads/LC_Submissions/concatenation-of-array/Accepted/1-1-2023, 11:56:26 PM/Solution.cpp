// https://leetcode.com/problems/concatenation-of-array

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> v =nums;
        for(int i =0; i<n; i++){
         v.push_back(nums[i]);

        }
        
        return v;
    }
};