// https://leetcode.com/problems/number-of-squareful-arrays

class Solution {
public:
    bool isPerfectSquare(long double x)
{
    if (x >= 0) {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
       set<vector<int>>ans;
    void fxn( int ind, vector<int>&nums){
        if(ind>=nums.size()){
            for(int i=0;i<nums.size()-1;i++){
              int sum =nums[i]+nums[i+1];
                if(!isPerfectSquare(sum))return;
            }
            ans.insert(nums);
            return ;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            fxn(ind+1,nums);
            swap(nums[ind],nums[i]);
        }
        return ;
    }
    int numSquarefulPerms(vector<int>& nums) {
        fxn(0,nums);
      return ans.size();        
    }
};