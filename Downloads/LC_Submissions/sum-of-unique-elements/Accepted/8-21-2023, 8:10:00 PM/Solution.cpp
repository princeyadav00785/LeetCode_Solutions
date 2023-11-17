// https://leetcode.com/problems/sum-of-unique-elements

class Solution {
public:
    map<int,int>mp;
    int sumOfUnique(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int sum=0;
        for(auto x:mp){
            if(x.second==1)sum+=x.first;
        }
        return sum;
    }
};