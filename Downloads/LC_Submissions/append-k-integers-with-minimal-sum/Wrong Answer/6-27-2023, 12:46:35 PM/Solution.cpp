// https://leetcode.com/problems/append-k-integers-with-minimal-sum

class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        long long ans=0;
        int cnt=0;
        for(auto x:nums){
            if(x<=k)cnt++;
        }
        long long n= k+cnt;
        ans= (n*(n+1))/2;
        return ans;
    }
};