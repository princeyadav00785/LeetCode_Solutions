// https://leetcode.com/problems/max-pair-sum-in-an-array

class Solution {
public:
    int fxn(int n){
        int mxm=0;
        while(n){
            int a=0;
            a=n%10;
            
            n=n/10;
            mxm=max(a,mxm);
        }
        return mxm;
    }
    int maxSum(vector<int>& nums) {
        long long int cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(fxn(nums[i])==fxn(nums[j]))cnt++;
            }
        }
        return cnt;
    }
};