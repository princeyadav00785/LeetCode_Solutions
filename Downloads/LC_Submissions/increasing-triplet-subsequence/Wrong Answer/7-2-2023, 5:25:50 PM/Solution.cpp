// https://leetcode.com/problems/increasing-triplet-subsequence

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int cnt =1;
        int prev=nums[0];
        for(int i=1;i<nums.size();i++){
            if(cnt==3)return true;
            // cout<<prev<<" ";
            if(nums[i]>prev){
                prev=nums[i];
                cnt++;
            }else{prev=nums[i];cnt==1;}
        }
        return false;
    }
};