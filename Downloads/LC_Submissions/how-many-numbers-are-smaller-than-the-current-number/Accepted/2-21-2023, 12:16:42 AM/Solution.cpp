// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number

class Solution {
public:
//   0 1 2 3 4
//   1 2 2 3 8
//   8 1 2 2 3
// a 4 0 1 1 3

    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
          vector<int> a=nums;
          map<int,int> mp;
             sort(a.begin(),a.end());
          mp[a[0]]=0;
          for(int i=1;i<nums.size();i++){
              if(a[i]!=a[i-1]){
                 
                   mp[a[i]]=i;
              }
             
          }
          for(int i=0;i<nums.size();i++){
              ans.push_back(mp[nums[i]]);
          }
        return ans;

    }
};