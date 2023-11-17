// https://leetcode.com/problems/container-with-most-water

class Solution {
public:
    int maxArea(vector<int>& nums) {
        long long int n =nums.size()-1;
      long long  int l=0,h= n,mxm=0,product=0;
        while(l<=h){
           product =min(nums[l],nums[h])*(h-l);
            if(nums[l]>nums[h]){
                h--;
            }else if(nums[l]<nums[h])l++;
            else {l++;h--;}
            mxm= max(mxm, product);
        }
        
        return mxm;
        
    
          
        //     if(height[left] < height[right]) left++;
        //     else if(height[left] > height[right]) right--;
        //     else {
        //         left++;
        //         right--;
        //     }
        // }
        // return maxi;
    }
};