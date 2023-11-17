// https://leetcode.com/problems/longest-nice-subarray

class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int cnt=1,prev=nums[0],ans=0;
         for(int i=1;i<nums.size();i++){

             if((prev&nums[i])==0){cnt++;}
             else{
                 prev=nums[i];
                 cnt=1;
             }
             ans=max(cnt,ans);
         }
        return ans;
    }
};