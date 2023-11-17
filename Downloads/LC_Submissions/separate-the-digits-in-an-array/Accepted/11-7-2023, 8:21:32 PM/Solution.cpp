// https://leetcode.com/problems/separate-the-digits-in-an-array

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
       vector<int>ans;
        for(int i=0;i<nums.size();i++){
            string s= to_string(nums[i]);
            for(int i=0;i<s.length();i++){
                ans.push_back(s[i]-'0');
            }
        }
        return ans;
    }
};