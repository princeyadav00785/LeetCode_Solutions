// https://leetcode.com/problems/next-permutation

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int a = 0, b = 0;
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i + 1] > nums[i]) {
                a = i;
                break;
            }
        }
        if (a <=0) {
            reverse(nums.begin(), nums.end());
        } else {
            for (int i = n - 1; i > a; i--) {
                if (nums[i] > nums[a]) {
                    b = i;
                    break;
                }
            }
            swap(nums[a], nums[b]);
            reverse(nums.begin() + a + 1, nums.end());
        }
    }
};
