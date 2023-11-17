// https://leetcode.com/problems/continuous-subarray-sum

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        //   unordered_map<int,int> mp;
        // int sum=0,ans=0;
        // mp[sum] = 1;
        // for(auto it:nums){
        //     sum += it;
        //     int md= sum%k;
        //     int find = md;
        //     if(mp.find(find) != mp.end()){
        //         ans += mp[find];
        //     }
        //     mp[md]++;
        // }
        // return ans;
          int n=nums.size(), pretemp=0, sum=0;
        map<int,int> mods;
        for (int i=0; i<n; i++){
            sum = (sum + nums[i]) % k;  // [edited]
            if (mods[sum]) return true;
            mods[sum] ++;
            pretemp = sum;
        }
        return false;
    }
};