// https://leetcode.com/problems/count-nice-pairs-in-an-array

class Solution {
public:
    
    
    void revers(vector<int>&rev,vector<int>&nums){
        for(int i=0;i<nums.size();i++){
            int n= nums[i];
            string s= to_string(n);
        reverse(s.begin(),s.end());
          n=  stoi(s);
            rev.push_back(n);
        }
    }
    map<int,int>mp;
    int countNicePairs(vector<int>& nums) {
        vector<int>rev;
        vector<int>v;
        revers(rev,nums);
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]-rev[i]);
        }
     for(int i=0;i<nums.size();i++){
         mp[v[i]]++;
     }   
        long long ans=0;
        int mod =1e9+7;
        for(auto x:mp){
            long long int a=0;
            if(x.second>1){
                a= ((x.second)*(x.second-1))/2%mod;
            }
            ans+=a;
        }
        return ans;
    }
};