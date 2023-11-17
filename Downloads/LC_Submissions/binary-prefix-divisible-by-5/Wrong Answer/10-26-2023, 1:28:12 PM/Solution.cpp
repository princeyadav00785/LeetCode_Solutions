// https://leetcode.com/problems/binary-prefix-divisible-by-5

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        
        vector<bool>v;
        int a=0;
        for(int i=0;i<nums.size();i++){
            a+= nums[i]*(pow(2,i));
            // cout<<a<<" ";
               v.push_back(a%5==0);
        }
        return v;
    }
};