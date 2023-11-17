// https://leetcode.com/problems/product-of-array-except-self

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v(nums.size(),0);
        int ans=1,b=1;
        for(int i=0;i<nums.size();i++){
           
                ans *=nums[i];
            
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                b *=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                v[i]= ans/nums[i];
            }
            else v[i]=b;
        }
        return v;
        
    }
};