// https://leetcode.com/problems/median-of-two-sorted-arrays

class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        vector<int>v(a.begin(),a.end());
        for(int i=0;i<b.size();i++){
            v.push_back(b[i]);
        }
        sort(v.begin(),v.end());
        int n=v.size();
        double ans=0;
        if(n%2==0){
            ans= ((double)(v[n/2]+v[n/2-1]))/2.0;
        }else ans= ((double)v[n/2]);
        
        return ans;
    }
};