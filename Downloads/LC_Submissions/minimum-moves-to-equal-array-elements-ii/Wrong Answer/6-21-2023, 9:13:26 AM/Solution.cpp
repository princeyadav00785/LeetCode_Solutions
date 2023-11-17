// https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        long long ans=0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        long long k= sum/nums.size();
        for(int i=0;i<nums.size();i++){
            ans+=abs(k-nums[i]);
        }
        return ans;
    }
};