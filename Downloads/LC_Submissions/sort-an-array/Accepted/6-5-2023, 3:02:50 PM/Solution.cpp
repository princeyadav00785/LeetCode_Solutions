// https://leetcode.com/problems/sort-an-array

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        priority_queue<pair<int,int>>q;
        for(int i=0;i<nums.size();i++){
            q.push({nums[i],i});
        }
        for(int i=0;i<nums.size();i++){
            int a= q.top().second;
            int b= q.top().first;
            ans[nums.size()-i-1]=b;
            q.pop();
        }
        
        return ans;
    }
};