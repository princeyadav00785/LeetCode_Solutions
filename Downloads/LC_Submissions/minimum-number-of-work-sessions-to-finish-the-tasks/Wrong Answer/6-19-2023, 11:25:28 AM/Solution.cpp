// https://leetcode.com/problems/minimum-number-of-work-sessions-to-finish-the-tasks

class Solution {
public:
    int minSessions(vector<int>& n, int s) {
        int sum=0;
        for(int i=0;i<n.size();i++){
            sum+=n[i];
        }
        if(sum%s==0){return sum/s;}else return sum/s+1;
    }
};