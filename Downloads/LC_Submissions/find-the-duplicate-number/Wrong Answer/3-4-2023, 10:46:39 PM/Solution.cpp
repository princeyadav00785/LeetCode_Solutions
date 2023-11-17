// https://leetcode.com/problems/find-the-duplicate-number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans =0;
        int n = nums.size();
        int cnt =0;
        for(int i=0;i<n;i++){
            ans = ans^nums[i];
            cnt++;
        }
        for(int i=1;i<n;i++){
            ans =ans^i;
            cnt++;
        }
        return ans;
    }
};