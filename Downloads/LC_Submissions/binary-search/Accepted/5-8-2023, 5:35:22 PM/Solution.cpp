// https://leetcode.com/problems/binary-search

class Solution {
public:
    int search(vector<int>& nums, int target) {
       map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        if(nums[0]==target){return 0;}
        if(mp[target]){return mp[target];}else return -1;
    }
};