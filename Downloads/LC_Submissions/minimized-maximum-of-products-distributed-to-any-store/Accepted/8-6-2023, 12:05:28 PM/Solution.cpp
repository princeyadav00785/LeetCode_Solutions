// https://leetcode.com/problems/minimized-maximum-of-products-distributed-to-any-store

class Solution {
public:
    bool fxn(vector<int>&nums,int a,int n){
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int sum=nums[i];
          if(sum%a==0){
              cnt+=sum/a;
          }else cnt+=sum/a+1;
            if(cnt>n)return false;
        }
        return true;
    }
    
    int minimizedMaximum(int n, vector<int>& nums) {
        int mxm=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mxm)mxm= nums[i];
        }
        int l=1 ,h=mxm;
        while(l<=h){
            long long mid = (l+h)/2;
            if(fxn(nums,mid,n)){
                h=mid-1;
            }else {
                l=mid+1;
            }
        }
        return l;
    }
};