// https://leetcode.com/problems/3sum

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
       for(int i =0; i< nums.size()-2; i++){
           int target = 0 - nums[i];
           int s = i+1;
        int e= nums.size()-1;
           while(s< e){
               if(nums[s]+nums[e]> target ){
                   e = e-1;
               }else if(nums[s]+nums[e]< target ){
                   s= s+1;
               }else{
                   cout<<"1";
                   ans.push_back({nums[i],nums[s],nums[e]});
                   break;
               }
           }
       }
        return ans;
    }
};