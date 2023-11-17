// https://leetcode.com/problems/ways-to-split-array-into-good-subarrays

class Solution {
public:
int mod = 1e9+7;
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        vector<int> temp;
        for(int i = 0;i<n;i++){
            if(nums[i]==1) temp.push_back(i); 
        }
        if(temp.size()==1) return 1;
        for(int i = 0;i<temp.size()-1;i++){
            int a = temp[i];
            int b = temp[i+1];
            int diff = b-a;
            ans = ans%mod;
            ans = (ans*diff)%mod;
        }
        return ans%mod;
    }
};