// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

class Solution {
public:
    int right(vector<int>& nums, int k){
        int ans=-1;
        int l=0,h=nums.size()-1;
       
        while(l<=h){
             int mid = (h+l)/2;
            if(nums[mid]==k){
                ans =mid;
                h=mid-1;
            }
           else if(nums[mid]>k){
                h=mid-1;
            }else l=mid+1;
        }
        return ans;
        
        
        
    }
    
        int left(vector<int>& nums, int k){
        int ans=-1;
        int l=0,h=nums.size()-1;
       
        while(l<=h){
             int mid = (h+l)/2;
            if(nums[mid]==k){
                ans =mid;
                l=mid+1;
            }
            if(nums[mid]>k){
                h=mid-1;
            }else l=mid+1;
        }
        return ans;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int a=right(nums,target);
        int b= left(nums,target);
        v.push_back(a);
        v.push_back(b);
        return v;
    }
};