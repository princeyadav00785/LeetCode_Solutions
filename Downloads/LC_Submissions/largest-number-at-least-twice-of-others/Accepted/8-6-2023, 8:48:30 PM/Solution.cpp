// https://leetcode.com/problems/largest-number-at-least-twice-of-others

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
     
        vector<int>a=nums;
        sort(a.begin(),a.end());
        int n= nums.size();
        if(a[n-1]<2*a[n-2]){return -1;}
        int x=a[n-1];
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==x)ans=i;
        }
        return ans;
    }
};