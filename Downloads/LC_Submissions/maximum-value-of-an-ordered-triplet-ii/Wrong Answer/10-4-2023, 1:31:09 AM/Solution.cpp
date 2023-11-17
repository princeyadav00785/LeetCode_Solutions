// https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-ii

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans=0;
        vector<int>v(nums.size(),0);
        long long  a=INT_MIN;
        for(int i=nums.size()-1;i>=0;i--){
            v[i]=a;
            if(nums[i]>a)a=nums[i];
        }
        v[nums.size()-1]=0;
        int x=nums[0];
        a=0;
        for(int i=1;i<nums.size()-1;i++){
            if(x<nums[i])x=nums[i];
            else {
                a=1ll*(x-nums[i])*v[i+1];
                ans=max(a,ans);
            }
        }
        
        
        
        return ans;
        
    }
};