// https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int cnt=0,prev=0,res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)cnt++;
            else{
                res= max(res,cnt+prev);
                prev=cnt;
                cnt=0;
            }
        }
        res= max(res,cnt+prev);
        if(res==nums.size())return nums.size()-1;
        else return res;
    }
};