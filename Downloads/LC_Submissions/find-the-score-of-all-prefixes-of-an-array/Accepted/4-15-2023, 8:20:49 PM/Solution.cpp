// https://leetcode.com/problems/find-the-score-of-all-prefixes-of-an-array

class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long int> v;
       long long int mxm=-1,sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mxm){
                mxm=nums[i];
               
            }
             sum+=nums[i]+mxm;
                v.push_back(sum);
        }
        return  v;
    }
};