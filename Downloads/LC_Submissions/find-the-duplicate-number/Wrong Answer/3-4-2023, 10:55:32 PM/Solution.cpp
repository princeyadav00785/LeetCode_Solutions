// https://leetcode.com/problems/find-the-duplicate-number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
   int s=0, f=0;
        int n=nums.size();
        s=(s+1)%n;
        f=(f+2)%n;
        while(nums[s]!=nums[f]){
             s=(s+1)%n;
        f=(f+2)%n;
        }
         return nums[s];
        
//         1  3 4 2 2 
//         sf   
//            s f 
//              s    f
//            f    s
//                f  s 
    }
};