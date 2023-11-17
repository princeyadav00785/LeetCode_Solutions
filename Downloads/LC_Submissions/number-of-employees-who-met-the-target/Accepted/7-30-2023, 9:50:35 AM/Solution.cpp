// https://leetcode.com/problems/number-of-employees-who-met-the-target

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int ans = 0;
        sort(hours.begin(), hours.end());

        int a = lower_bound(hours.begin(), hours.end(), target) - hours.begin();
        ans = hours.size() - a;

        return ans;
    }
};
