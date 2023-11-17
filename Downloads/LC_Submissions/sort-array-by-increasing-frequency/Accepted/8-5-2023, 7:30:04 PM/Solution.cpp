// https://leetcode.com/problems/sort-array-by-increasing-frequency

class Solution {
public:
    map<int,int>mp;
        
    vector<int> frequencySort(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
       sort(nums.begin(),nums.end(),[&](int a,int b){
        return mp[a]==mp[b]? a>b: mp[a]<mp[b];
       });
  return nums;
    }
};
