// https://leetcode.com/problems/4sum

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
       if(nums.size()==1||2||3)return ans;
        vector<int>v;
        for(int i=0;i<nums.size()-3;i++){
            for(int j=i+1;j<nums.size()-2;j++){
                for(int k=j+1;k<nums.size()-1;k++){
                    for(int l=k+1;l<nums.size();l++){
                        if(nums[i]+nums[j]+nums[k]+nums[l]==target){
                            v.push_back(nums[i]);
                               v.push_back(nums[j]);
                               v.push_back(nums[k]);
                               v.push_back(nums[l]);
                            ans.push_back(v);
                            v.clear();
                        }
                    }
                }
            }
        }
         set<vector<int>>s(ans.begin(),ans.end());
        vector<vector<int>>a(s.begin(),s.end());
        return a;
    }
};