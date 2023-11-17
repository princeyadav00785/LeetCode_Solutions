// https://leetcode.com/problems/longest-subarray-with-maximum-bitwise-and

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        map<int,int> mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int max1=0;
        int ans =1;
        for(auto x: mp){
            if(x.second>=1&&x.first>max1){
                max1 =x.first;
                ans = x.second;
            }
        }
//         1-3
//         2-3
//         3-2;
        return ans;
    }
};