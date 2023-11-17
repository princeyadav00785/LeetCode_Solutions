// https://leetcode.com/problems/non-overlapping-intervals

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
       sort(intervals.begin(), intervals.end());
  int a= intervals[0][1],ans=0;
        for(int i=1;i<intervals.size();i++ ){
            if(a>intervals[i][0]){
                ans++;
            }else
                a=intervals[i][1];
        }

        
        return ans;
        
    }
};

// 1 2   1 3   2 3    2 4
