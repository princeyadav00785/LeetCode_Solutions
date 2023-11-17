// https://leetcode.com/problems/shuffle-string

class Solution {
public:
    string restoreString(string s, vector<int>& nums) {
            map<int,char> mp;
        for(int i=0;i<s.size();i++){
            mp[nums[i]]=s[i];
        }
        string ans;
        for(int i=0;i<s.size();i++){
            ans.push_back(mp[i]);
//             ans += mp[i];
        }
        
        
        return ans;
    }
};