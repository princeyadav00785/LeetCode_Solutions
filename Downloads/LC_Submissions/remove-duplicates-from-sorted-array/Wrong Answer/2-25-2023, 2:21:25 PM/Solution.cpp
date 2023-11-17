// https://leetcode.com/problems/remove-duplicates-from-sorted-array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a=0;
        if(nums.size()==1){
            return 1;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[a]= nums[i-1];
                 a++;
            }
           
        }
        if(nums[nums.size()-1]!=nums[nums.size()-2]){
            nums[a]= nums[nums.size()-1];
            a++;
        }
        return a;
    }
};