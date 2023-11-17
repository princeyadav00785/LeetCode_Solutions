// https://leetcode.com/problems/sorting-three-groups

class Solution {
public:
    vector<int> temp;
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        
        int ct=0;
        temp.push_back(nums[0]);
        for(int i=1;i<n;i++){
            auto l=lower_bound(temp.begin(),temp.end(),nums[i]);
            auto u=upper_bound(temp.begin(),temp.end(),nums[i]);
            if(u==temp.end()) {
                temp.push_back(nums[i]);
            }else{
                int ind=u-temp.begin();
                temp[ind]=min(temp[ind],nums[i]);
                ct++;
            }
        }
        return ct;
    }
};