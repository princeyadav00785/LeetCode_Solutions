// https://leetcode.com/problems/find-indices-with-index-and-value-difference-i

class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int id, int vd) {
        for(int i = 0;i<nums.size();i++){
            for(int j = i;j<nums.size();j++){
                if(abs(i-j)>=id and abs(nums[i]-nums[j])>=vd)return {i,j};
            }
        }
        return {-1,-1};
    }
};​class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        vector<int> ans;
        int a=-1,b=-1;
        for(int i =0;i<nums.size()-1;i++)
        {
            for(int j =i;j<nums.size();j++){
              if(  abs(i - j) >= indexDifference, and
abs(nums[i] - nums[j]) >= valueDifference){a=i;b=j;}
            }
        }
                ans.push_back(a);
                ans.push_back(b);
    }
};