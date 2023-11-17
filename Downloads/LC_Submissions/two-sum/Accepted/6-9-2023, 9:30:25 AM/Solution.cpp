// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        vector<int>ans;

        multimap<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp.insert({nums[i],i});
        }
               for(int i=0;i<nums.size();i++){
                   
                   if(mp.find(k-nums[i])!=mp.end()&&mp.find(k-nums[i])->second!=i){
                       ans.push_back(i);
                       ans.push_back(mp.find(k-nums[i])->second);
                       // for(auto x:mp){
                       // }
                       break;
                   }
               }
        
        return ans;
    }
};