// https://leetcode.com/problems/remove-duplicates-from-sorted-array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a=1;
        
        for(int i =1;i<nums.size();i++){
            if(nums[i]!=nums[a-1]){
                nums[a]=nums[i];
                a++;
            }
        }
        return a;
    }
};