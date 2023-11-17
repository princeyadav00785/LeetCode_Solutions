// https://leetcode.com/problems/merge-intervals

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int cnt=0;
        int l=intervals[0][0],h=intervals[0][1];
        for(auto x:intervals){
            if(x[0]<=h){h=x[1];}else if(x[0]>h) {
                ans.push_back({l,h});
                l=x[0];
                h=x[1];
            }
                                                                      cnt++;
        }
        if(h==intervals[intervals.size()-1][1])
        ans.push_back({l,h});
        // cout<<cnt;
        return ans;
    }
};