// https://leetcode.com/problems/check-if-it-is-a-straight-line

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        double slope = (double)(v[1][1]-v[0][1])/(v[1][0]-v[0][0]);
        
        for(int i=1;i<v.size();i++){
         double s= (double)(v[i][1]-v[i-1][1])/(v[i][0]-v[i-1][0]);
            if(s!=slope){return false;}
        }
        return true;
    }
};