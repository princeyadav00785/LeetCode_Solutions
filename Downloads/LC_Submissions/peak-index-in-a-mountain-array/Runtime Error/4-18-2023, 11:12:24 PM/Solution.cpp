// https://leetcode.com/problems/peak-index-in-a-mountain-array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,h=arr.size()-1;
        int ans=0;
        while(l<=h){
            int mid= (h+l)/2;
            if(arr[mid]>arr[mid-1]&&arr[mid+1]>arr[mid]){
            l=mid+1;
            }else if(arr[mid]<arr[mid-1]&&arr[mid+1]<arr[mid]){
                h=mid-1;
            }else {ans=mid;break;}
        }
        return ans;
    }
};