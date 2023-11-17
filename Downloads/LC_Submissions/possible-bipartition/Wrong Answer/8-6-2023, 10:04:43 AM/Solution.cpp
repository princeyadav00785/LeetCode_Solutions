// https://leetcode.com/problems/possible-bipartition

class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& nums) {
        vector<int>v(n+1,0);
      for(int i=0;i<nums.size();i++){
          if(v[nums[i][0]]==0&&v[nums[i][1]]==0){
              v[nums[i][0]]= 0;
              v[nums[i][1]]=1;
          }else{
              if(v[nums[i][0]]==v[nums[i][1]]){
                  return false;
              }else{
                    v[nums[i][0]]= 0;
              v[nums[i][1]]=1;
              }
          }
      }

      return true;
    }
};