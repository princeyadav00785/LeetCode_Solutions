// https://leetcode.com/problems/number-of-subarrays-with-gcd-equal-to-k

class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int cnt=0;
        
        for(int i=0;i<nums.size();i++){
            int gc=nums[i];
            
            for(int j=i;j<nums.size();j++){
                
                gc=__gcd(gc,nums[j]);
                if(gc==k)cnt++;
            }
            
        }
        
        
        return cnt;
    }
};