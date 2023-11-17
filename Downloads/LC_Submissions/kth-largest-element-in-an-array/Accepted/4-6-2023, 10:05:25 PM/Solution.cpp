// https://leetcode.com/problems/kth-largest-element-in-an-array

class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
        int ans=0,n=v.size();
        sort(v.begin(),v.end());
        for(int i=n-1;i>n-1-k;i--){
            ans =v[i];
        }
        return ans;
    }
};