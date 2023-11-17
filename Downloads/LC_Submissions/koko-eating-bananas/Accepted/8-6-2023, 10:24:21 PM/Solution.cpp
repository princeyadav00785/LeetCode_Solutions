// https://leetcode.com/problems/koko-eating-bananas

class Solution {
public:
    bool fxn(vector<int>&nums,int k , int a){
        
        long long  cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%a==0)cnt+=nums[i]/a;
            else cnt+=nums[i]/a+1;
        }
        if(cnt<=k)return true;
        return false;
    }
    
    int minEatingSpeed(vector<int>& nums, int k) {
        int mxm=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mxm)mxm=nums[i];
        }
        int l=1,h=mxm;
        while(l<=h){
            int mid=(l+h)/2;
            if(fxn(nums,k,mid)){
                h=mid-1;
            }else {
                l=mid+1;
            }
        }
        return l;
    }
};