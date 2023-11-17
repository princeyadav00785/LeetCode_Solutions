// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       map<int,int>mp;
        int ind=0;
        for(int i=0;i<nums.size();i++){
        if(mp[nums[i]]!=2){
            mp[nums[i]]++;
            nums[ind]=nums[i];
            ind++;
        }  
            
        }
        return ind;
    }
};