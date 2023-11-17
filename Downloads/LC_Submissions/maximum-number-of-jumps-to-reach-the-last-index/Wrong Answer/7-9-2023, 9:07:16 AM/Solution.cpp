// https://leetcode.com/problems/maximum-number-of-jumps-to-reach-the-last-index

class Solution {
    
public:
    void fxn(vector<int>& nums, int k,int& cnt,int ind,int n){
        if(ind>nums.size())return ;
        
        if(ind+1<n){
                            cnt=cnt+1;
            if(abs(nums[ind+1]-nums[ind])<=k){

                fxn(nums,k,cnt,ind+1,n);
            }else fxn(nums,k,cnt,ind+2,n);
        }
        return;
    }
    
    int maximumJumps(vector<int>& nums, int k) {
        if(k==0)return -1;
        int cnt=0,n=nums.size();
        fxn(nums,k,cnt,0,n);
        
        return cnt;
    }
};