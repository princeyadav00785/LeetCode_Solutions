// https://leetcode.com/problems/search-in-rotated-sorted-array

class Solution {
    public:
    int pivotindex(vector<int>&arr){
        int n= arr.size();
     int low =0;
     int high = arr.size()-1;
        int index=0;
     while(low<=high){
         int mid = low+(high-low)/2;
         if(arr[mid]>arr[(mid-1)%n]&&arr[mid]>arr[(mid+1)%n]){
             index=mid;
             break;
         }
         if(arr[mid]>arr[mid-1]){
             low = mid+1;
         }
          if(arr[mid]<arr[mid-1]){
             low = mid+1;
         }
     }
        return index;
    }
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==2){
            if(nums[0]==target){
                return 0;
            } if(nums[1]==target){
                return 1;
            }else return -1;
        }
        if(nums.size()==1){
            if(nums[0]==target){
                return 0;
            }else return -1;
        }
        
        int a= pivotindex(nums);
        // cout<<a;
        int ans =-1;
        int l=0,h=nums.size()-1;
        
       
      if(a==nums.size()-1){
          l=0;
          h=nums.size()-1;
      }else {if(target>=nums[0]){
            h= a;
        }else l= a+1;}
    cout<<a<<l<<h;
        while(l<=h){
            int mid =l+(h-l)/2;
            if(nums[mid]==target ){
                ans = mid;
                break;
            }
            if(nums[mid]>target){
                h= mid-1;
            }
            if(nums[mid]<target){
                l= mid+1;
            }
        }
        return ans;
        
    }
};