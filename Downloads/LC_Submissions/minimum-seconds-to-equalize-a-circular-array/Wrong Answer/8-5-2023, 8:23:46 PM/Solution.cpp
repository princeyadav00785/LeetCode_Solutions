// https://leetcode.com/problems/minimum-seconds-to-equalize-a-circular-array

class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
        int mxm=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        if(mp.size()==1)return 0;
        for(auto x:mp){
            if(x.second>mxm)mxm=x.second;
        }
        int c=0;
        for(auto x:mp){
            if(x.second==mxm){c=x.first;}
        }
        
        int cnt=0;
        int ans=0;
        int n=nums.size();
        while(true){
            if(cnt<mxm){
            for(int i=0;i<n;i++){
                if(nums[i]==c){
                    cnt++;
                    nums[(i - 1 + n) % n]=nums[i];
                    nums[(i + 1 + n) % n]=nums[i];
                    i++;
                }
            }}else break;
            ans++;
            
        }
        return ans;
    }
};