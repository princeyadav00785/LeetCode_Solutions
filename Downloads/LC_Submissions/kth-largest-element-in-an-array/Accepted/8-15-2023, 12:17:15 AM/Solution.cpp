// https://leetcode.com/problems/kth-largest-element-in-an-array

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>q;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
            if(q.size()>n-k+1)q.pop();
        }
        int ans = q.top();
        return ans;
    }
};