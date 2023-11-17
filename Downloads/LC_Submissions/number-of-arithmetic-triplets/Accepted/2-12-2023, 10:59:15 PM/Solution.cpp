// https://leetcode.com/problems/number-of-arithmetic-triplets

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;

        }
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i]+diff)!=mp.end()&&mp.find(nums[i]+2*diff)!=mp.end()){
                cnt++;
            }
        }
        return cnt;
    }
};