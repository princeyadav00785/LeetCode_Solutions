// https://leetcode.com/problems/find-the-duplicate-number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans=-1;
      map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x: mp){
            if(x.second>1){ans=x.first;break;}
        }
        return ans;
        
    }
};