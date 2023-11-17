// https://leetcode.com/problems/maximum-spending-after-buying-items

class Solution {
public:
    long long maxSpending(vector<vector<int>>& values) {
        vector<int>v;
        for(int i=0;i<values.size();i++){
            for(int j=0;j<values[0].size();j++){
                v.push_back(values[i][j]);
            }
        }
        sort(v.begin(),v.end());
        long long ans=0;
        for(int i=0;i<v.size();i++){
            ans+=(i+1)*v[i];
        }
        return ans;
    }
};