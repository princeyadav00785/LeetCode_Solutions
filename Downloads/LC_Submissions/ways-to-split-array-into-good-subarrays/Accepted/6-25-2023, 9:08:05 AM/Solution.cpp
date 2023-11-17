// https://leetcode.com/problems/ways-to-split-array-into-good-subarrays

#include <bits/stdc++.h>
class Solution {
public:
int mod = 1e9+7;
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        int n = nums.size();
        long long  ans = 1;
        vector<int> t;
        for(int i = 0;i<n;i++){
            if(nums[i]==1) t.push_back(i); 
        }
        if(t.size()==1) return 1;
        if(t.size()==0)return 0;
        for(int i = 0;i<t.size()-1;i++){
          
            int diff = t[i+1]-t[i];
            ans = ans%mod;
            ans = (ans*diff)%mod;
        }
        return ans%mod;
    }
};