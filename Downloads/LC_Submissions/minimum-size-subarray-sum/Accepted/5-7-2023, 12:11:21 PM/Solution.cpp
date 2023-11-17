// https://leetcode.com/problems/minimum-size-subarray-sum

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int cnt=0,sum=0;
        // for(int i=nums.size()-1;i>-1;i--){
        //     sum+=nums[i];cnt++;
        //     if(sum>=target) break;
        // }
        // cout<<sum;
        // // return cnt;
        // if(cnt==nums.size()&&sum<target){
        //     return 0;
        // }else return cnt;
        
            int left=0;
        int right=0;
        int minlen=INT_MAX;
        int sum=0;
        while(right<nums.size())
        {
            sum+=nums[right++];
            while(sum>=target)
            {
                minlen=min(minlen,right - left);
                sum-=nums[left++];
            }
        }
        return(minlen==INT_MAX)?0:minlen; 
    }
};