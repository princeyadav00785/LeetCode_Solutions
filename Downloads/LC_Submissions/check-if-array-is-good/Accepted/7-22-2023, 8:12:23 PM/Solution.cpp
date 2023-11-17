// https://leetcode.com/problems/check-if-array-is-good

class Solution {
public:
    map<int,int>mp;
    bool isGood(vector<int>& nums) {
       
        int n= nums.size();
        for(int i=0;i<n;i++){
          mp[nums[i]]++;}
        for(int i=0;i<n-2;i++){
            if(mp[i+1]!=1){return false;}
        }
        if(mp[n-1]!=2)return false;
        
        return true;
        
    }
};