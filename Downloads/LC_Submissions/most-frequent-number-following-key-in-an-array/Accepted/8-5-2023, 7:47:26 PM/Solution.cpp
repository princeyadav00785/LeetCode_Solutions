// https://leetcode.com/problems/most-frequent-number-following-key-in-an-array

class Solution {
public:
    map<int,int>mp;
    
    int mostFrequent(vector<int>& nums, int key) {
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==key){
            mp[nums[i+1]]++;
        }
    }   
        int mxm=0;
        for(auto x:mp){
            if(x.second>mxm)mxm=x.second;
        }
        int ans=0;
        for(auto x:mp){
         if(x.second==mxm){
             ans=x.first;
         }     
        }
        
        return ans;
    }
};