class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0, h=nums.size()-1;
        int end=h;
         while(l<h){
             int mid = l +(h-l)/2;
             if(nums[mid]<nums[h]){
                 h=mid;
             }else if(nums[mid]>nums[h]){
                 l=mid+1;
             }else{
                 h--;
             }
         }
        

        return nums[l];
    }
};