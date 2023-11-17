// https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts

 class Solution {
       public:
int min(vector<int>& nums){
    int mx=8451320;
     for(int i=0;i<nums.size();i++){
        if(nums[i]<mx && nums[i]!=0){
            mx=nums[i];
        }
    }
    
                           return mx;
}
int minimumOperations(vector<int>& nums) {
    int n=nums.size();
    bool f=true;int c=0,z=100;
    
    if(n==1){
        if(nums[0]==0)return 0;
        return 1;}
    while(z--){
        int p=0;
   int mx=min(nums);
        if(mx==8451320)return c;
     for(int i=0;i<n;i++){
         if(nums[i]!=0)
        nums[i]-=mx;
    }
     for(int i=0;i<n;i++){
        if(nums[i]==0)p++;
    } c++; 
             if(p==n) break;
           
    }
    return c;
}
};