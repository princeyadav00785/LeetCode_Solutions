// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        vector<int>ans;

        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
               for(int i=0;i<nums.size();i++){
                   if(mp[k-nums[i]]){
                       ans.push_back(i);
                       ans.push_back(mp[k-nums[i]]);
                       break;
                   }
               }
        
        return ans;
    }
};