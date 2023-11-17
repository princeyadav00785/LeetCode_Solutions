// https://leetcode.com/problems/largest-number

#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        for (int i = 0; i < nums.size(); i++) {
            v.push_back(to_string(nums[i]));
        }
        
        sort(v.begin(), v.end(), [&](const string& a, const string& b) {
            return b + a < a + b;
        });
        
        string ans = "";
        for (int i = 0; i < v.size(); i++) {
            ans += v[i];
        }
        
        // Check if the largest number is 0
        if (ans[0] == '0') {
            return "0";
        }
        
        return ans;
    }
};
