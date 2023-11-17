// https://leetcode.com/problems/sum-of-values-at-indices-with-k-set-bits

class Solution {
public:
    int fxn(int n){
     int ans=0;
    while(n){
        ans+=n%2;
        n=n/2;
    }
        
        return ans;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
     long long   int cnt=0;
        for(int i=0;i<nums.size();i++){
            int a= fxn(i);
            cout<<a<<" ";
            if(a==k){cout<<i<<" " ;cnt+=nums[i];}
        }
        return cnt;
    }
};