// https://leetcode.com/problems/largest-number

class Solution {
public:
    string largestNumber(vector<int>& nums) {
    string ans ="";
        vector<string>v;
        for(int i=0;i<nums.size();i++){
            string s= to_string(nums[i]);
            v.push_back(s);
        }
        sort(v.begin(),v.end(),[&](const auto&a ,const auto &b){return b+a>a+b;});
        for(int i=v.size()-1;i>-1;i--){
            ans+=v[i];
        }
        return ans;
    }
};