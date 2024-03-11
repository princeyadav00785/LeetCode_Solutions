class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0, h=nums.size()-1;
        int end=h;
         while(l<h){
             int mid = l +(h-l)/2;
             if(nums[mid]<nums[end]){
                 h=mid;
             }else{
                 l=mid+1;
             }
         }
        

        return nums[l];
    }
};