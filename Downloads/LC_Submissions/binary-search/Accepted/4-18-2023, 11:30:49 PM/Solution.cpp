// https://leetcode.com/problems/binary-search

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int l =0, h=arr.size()-1;
        int ans=-1;
        int mid=(l+h)/2;
        while(l<=h){
         
            if(arr[mid]>target){
                h=mid-1;
            }else if(arr[mid]<target){l=mid+1;}else
               { ans =mid;break;}
            
            mid= (l+h)/2;
        }
        return ans;
    }
};