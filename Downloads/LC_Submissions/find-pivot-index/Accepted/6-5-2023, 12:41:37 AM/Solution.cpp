// https://leetcode.com/problems/find-pivot-index

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int t=0 ,sum=0 ,index=-1;
        for(int i=0;i<nums.size();i++){
            t+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
           t-=nums[i];
            if(sum==t){index=i;break;}
                 sum+=nums[i];
            
        }
        return index;
    }
};