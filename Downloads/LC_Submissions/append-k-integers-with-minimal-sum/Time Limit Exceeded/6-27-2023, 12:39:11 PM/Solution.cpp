// https://leetcode.com/problems/append-k-integers-with-minimal-sum

class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int missingNum = 1;
        long long ans = 0;
        int cnt = 0;

        while (cnt < k) {
            if (numSet.find(missingNum) == numSet.end()) {
                ans += missingNum;
                cnt++;
            }
            missingNum++;
        }
        
        return ans;
    }
};
