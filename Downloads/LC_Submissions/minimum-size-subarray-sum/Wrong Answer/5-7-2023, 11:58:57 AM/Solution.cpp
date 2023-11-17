// https://leetcode.com/problems/minimum-size-subarray-sum

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0,sum=0;
        for(int i=nums.size()-1;i>-1;i--){
            sum+=nums[i];cnt++;
            if(sum>=target) break;
        }
        // return cnt;
        if(cnt==nums.size()&&sum<target){
            return 0;
        }else return cnt;
    }
};