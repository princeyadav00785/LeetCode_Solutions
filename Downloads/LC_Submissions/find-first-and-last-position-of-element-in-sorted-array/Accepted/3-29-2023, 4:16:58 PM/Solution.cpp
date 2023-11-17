// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n= nums.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                v.push_back(i);
                break;
            }
        }
          for(int i=n-1;i>=0;i--){
            if(nums[i]==target){
                v.push_back(i);
                break;
            }
        }
        if(v.size()==0){
            v.push_back(-1);
             v.push_back(-1);
        }
        return v;
    }
};