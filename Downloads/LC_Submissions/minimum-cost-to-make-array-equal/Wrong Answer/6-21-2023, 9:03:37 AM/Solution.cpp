// https://leetcode.com/problems/minimum-cost-to-make-array-equal

class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        set<int>s(nums.begin(),nums.end());
        if(s.size()==1)return 0;
        int mxm=INT_MIN,n=nums.size(),ind=0;
        for(int i=0;i<nums.size();i++){
            if(mxm<cost[i]){mxm=cost[i]; ind=i;}
            
        }
        cout<<ind;
        long long  ans=0;
        for(int i=0;i<n;i++){
            long long diff = abs(nums[i]-nums[ind]);
            ans+= diff*abs(cost[i]);
        }
        return ans;
    }
};