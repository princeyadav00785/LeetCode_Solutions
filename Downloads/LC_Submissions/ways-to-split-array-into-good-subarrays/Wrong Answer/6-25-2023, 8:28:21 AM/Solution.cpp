// https://leetcode.com/problems/ways-to-split-array-into-good-subarrays

class Solution {
public:
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        map<int,int>mp;
        map<int,int>mp2;
        int n=nums.size();
        vector<int>a(n,0);
        vector<int>b(n,0);
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(!mp[1]){a[i]=0;}else
            a[i]=mp[1];
        }
        for(int i=n-1;i>-1;i--){
            mp2[nums[i]]++;
            if(!mp2[1]){b[i]=0;}else
            b[i]=mp2[1];
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        if(mp[1]==1&&mp2[1]==1){return 1;}
        else
{        long long cnt=0,mod=1e+7;
        for(int i=1;i<n;i++){
            if(a[i-1]==1&&b[i]==1){cnt= (cnt+1)%mod;}
        }
        
        return cnt;}
    }
};