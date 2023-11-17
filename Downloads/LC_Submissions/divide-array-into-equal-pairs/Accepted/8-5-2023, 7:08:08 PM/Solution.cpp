// https://leetcode.com/problems/divide-array-into-equal-pairs

class Solution {
public:
    map<int,int>mp;
    bool divideArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(x.second%2!=0)return false;
        }
        return true;
    }
};