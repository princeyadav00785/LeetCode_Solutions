// https://leetcode.com/problems/minimum-number-of-operations-to-make-all-array-elements-equal-to-1

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int e=0,o=0,one=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){one++;}
            else if(nums[i]%2==0)e++;
            else o++;
        }
        if(o==nums.size()||e==nums.size())return -1;
        if(one ==nums.size())return 0;
        return nums.size()-one;
    }
};