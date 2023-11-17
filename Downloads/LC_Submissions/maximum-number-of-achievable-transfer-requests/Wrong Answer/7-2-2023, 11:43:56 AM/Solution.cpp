// https://leetcode.com/problems/maximum-number-of-achievable-transfer-requests

class Solution {
public:
    int maximumRequests(int n, vector<vector<int>>& requests) {
        map<int,int>mp;
         int cnt=0;
        vector<int>v1(n,0);
        vector<int>v2(n,0);
        for(auto x:requests){
         v1[x[0]]++;
            v2[x[1]]++;
        }
       for(int i=0;i<n;i++){
           cnt+= min(v1[i],v2[i]);
       }

        return cnt;
    }
};