class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0, h=nums.size()-1;
        int end=h;
        int ans=min(nums[0],nums[end]);
        while(l<=h){
            int mid = l+ (h-l)/2;
            if(nums[mid]<nums[end]){
                ans= min(ans,nums[mid]);
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};