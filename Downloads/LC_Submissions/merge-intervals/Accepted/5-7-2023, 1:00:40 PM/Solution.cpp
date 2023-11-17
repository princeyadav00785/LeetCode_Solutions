// https://leetcode.com/problems/merge-intervals

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       // sort(intervals.begin(),intervals.end());
       //  vector<vector<int>> ans;
       //  int cnt=0;
       //  int l=intervals[0][0],h=intervals[0][1];
       //  for(auto x:intervals){
       //      if(x[0]<=h){h=max(x[1],h);}else if(x[0]>h) {
       //          ans.push_back({l,h});
       //          l=x[0];
       //          h=x[1];
       //      }
       //                                                                cnt++;
       //  }
       //  if(h==intervals[intervals.size()-1][1])
       //  ans.push_back({l,h});
       //  // cout<<cnt;
       //  return ans;
         if(intervals.size()<=1) return intervals;
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> output;
        output.push_back(intervals[0]);
        for(int i=1; i<intervals.size(); i++) {
            if(output.back()[1] >= intervals[i][0]) output.back()[1] = max(output.back()[1] , intervals[i][1]);
            else output.push_back(intervals[i]); 
        }
        return output;
        
    }
};