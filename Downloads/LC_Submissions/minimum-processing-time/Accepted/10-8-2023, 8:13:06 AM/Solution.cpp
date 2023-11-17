// https://leetcode.com/problems/minimum-processing-time

class Solution {
public:
    int minProcessingTime(vector<int>& a, vector<int>& b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int mxm=INT_MIN;
        int j=b.size()-1;
        for(int i=0;i<a.size();i++){
             int k=4,x=0;
            while(j&&k--){
                x=a[i]+b[j--];
                mxm=max(mxm,x);
                // cout<<x<<" ";
            }
        }
        return mxm;
    }
};