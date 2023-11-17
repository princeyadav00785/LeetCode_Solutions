// https://leetcode.com/problems/maximum-consecutive-floors-without-special-floors

class Solution {
public:
    int maxConsecutive(int b, int t, vector<int>& s) {
        vector<int>v;
        v.push_back(b-1);
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            v.push_back(s[i]);
        }
        v.push_back(t+1);
        int mxm=0;
        for(int i=1;i<v.size();i++){
            int d= v[i]-v[i-1]-1;
            if(d>mxm){
                mxm=d;
            }
        }
        return mxm;
    }
};