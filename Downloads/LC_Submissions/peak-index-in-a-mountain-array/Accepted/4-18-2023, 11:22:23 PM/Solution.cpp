// https://leetcode.com/problems/peak-index-in-a-mountain-array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0,e=arr.size()-1;
        int mid= (s+e)/2;
        while(s<=e){
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }else e=mid-1;
            mid= (s+e)/2;
        }
        return s;
        
    //     int l = 1, r = n.size() - 1;
    // while (l < r) {
    //     int m = (l + r) / 2;
    //     if (n[m] < n[m + 1])
    //         l = m + 1;
    //     else
    //         r = m;
    // }
    // return l;
    }
};