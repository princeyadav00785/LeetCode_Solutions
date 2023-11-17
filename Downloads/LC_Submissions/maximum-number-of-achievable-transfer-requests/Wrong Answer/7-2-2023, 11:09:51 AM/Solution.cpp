// https://leetcode.com/problems/maximum-number-of-achievable-transfer-requests

class Solution {
public:
    int maximumRequests(int n, vector<vector<int>>& requests) {
        map<int,int>mp;
        for(auto x:requests){
            mp[x[0]]++; mp[x[1]]--;
        }
        int cnt=0;
        for(auto x:requests){
            if(!mp[x[0]]&&!mp[x[1]])cnt++;
        }
        return cnt;
    }
};