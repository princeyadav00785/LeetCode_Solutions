// https://leetcode.com/problems/number-of-good-pairs

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
      map<int,int> mp;
      for(int i=0;i<nums.size();i++){
          mp[nums[i]]++;
      }  
     int ans =0;
     for(auto x: mp){
         ans += (x.second*(x.second-1))/2;
     }

     return ans;
    }
};