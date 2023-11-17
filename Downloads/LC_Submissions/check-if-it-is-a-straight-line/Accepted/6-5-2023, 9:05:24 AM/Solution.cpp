// https://leetcode.com/problems/check-if-it-is-a-straight-line

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& v) {
         double a = -1*( v[1][0] - v[0][0]  );
        
         double x = ( v[1][0] - v[0][0]  );
        double y = (v[1][1]-v[0][1]);
        double m;
        if(x == 0) m= INT_MAX;
        else m=y/x;
        for(int i=2;i<v.size();i++){
            double x1 = (v[i][0]-v[i-1][0]) ;
            double y1 = (v[i][1] - v[i-1][1] );
            double tan;
            if( x1 == 0 )  tan = INT_MAX;
            else tan = y1/x1;

            if(m != tan) return false;
        }
        return true;
    }
};