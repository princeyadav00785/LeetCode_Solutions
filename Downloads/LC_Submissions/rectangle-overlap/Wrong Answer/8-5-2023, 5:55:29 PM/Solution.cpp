// https://leetcode.com/problems/rectangle-overlap

class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1=abs(rec2[0]);
        int y1=abs(rec2[1]);
        int x2=abs(rec1[2]);
        int y2=abs(rec1[3]);
        
        int a2=abs(rec1[0]);
        int b2=abs(rec1[1]);
        int a1=abs(rec2[2]);
        int b1=abs(rec2[3]);
        if(x1<x2&&y1<y2&&a1>a2&&b1>b2)return true;
        return false;
    }
};