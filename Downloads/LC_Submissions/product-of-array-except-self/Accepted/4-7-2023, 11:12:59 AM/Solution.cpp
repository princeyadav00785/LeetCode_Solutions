// https://leetcode.com/problems/product-of-array-except-self

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int mul=1;
        vector<int> v(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            mul *=nums[i];
        }
        int ans =1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                for(int j=0;j<nums.size();j++){
                    if(j!=i){
                        ans *=nums[j];
                    }
                    
                }
                v[i]=ans;
            }
            else  v[i]=(mul/nums[i]);
            
        }
        return v;
        
    }
};