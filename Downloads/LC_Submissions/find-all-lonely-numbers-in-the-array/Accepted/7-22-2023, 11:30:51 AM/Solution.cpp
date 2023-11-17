// https://leetcode.com/problems/find-all-lonely-numbers-in-the-array

class Solution {
public:
    map<int,int>mp;
    vector<int>ans;
    vector<int> findLonely(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]-1]==0&&mp[nums[i]+1]==0&&mp[nums[i]]==1){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};