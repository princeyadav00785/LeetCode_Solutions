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
};