// https://leetcode.com/problems/partition-array-into-disjoint-intervals

class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
              int n=nums.size();
        vector<int> pref(n,0);//largest possible element in left
        vector<int> suff(n,0);//smallest possible element in right
        pref[0]=nums[0];
        for(int i=1;i<n;i++)
            pref[i]=max(pref[i-1],nums[i]);
        suff[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
            suff[i]=min(nums[i],suff[i+1]);
        int ind=0;
        for(int i=0;i<n-1;i++)
        {
            if(pref[i]<=suff[i+1])
            {
                ind=i;
                break;
            }
        }
        return ind+1;

    }
    
};