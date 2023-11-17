// https://leetcode.com/problems/move-zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                start=i;
                break;
            }
        }
        if(start==0&&nums[start]!=0)return;
      if(start==nums.size()-1)return ;
        int second=start+1;
        while(second<nums.size()){
            if(nums[second]!=0){
                nums[start++]=nums[second];
                nums[second]=0;
            }
            second++;
        }
        
    }
};