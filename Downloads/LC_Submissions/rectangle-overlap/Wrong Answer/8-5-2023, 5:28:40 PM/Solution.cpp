// https://leetcode.com/problems/rectangle-overlap

class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1=abs(rec2[0]);
        int y1=abs(rec2[1]);
        int x2=abs(rec1[2]);
        int y2=abs(rec1[3]);
        if(x1<x2&&y1<y2)return true;
        return false;
    }
};