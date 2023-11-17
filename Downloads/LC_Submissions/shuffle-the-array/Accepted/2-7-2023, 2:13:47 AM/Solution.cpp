// https://leetcode.com/problems/shuffle-the-array

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n,0);
        for(int i=0;i<2*n;i=i+2){
        ans[i]= nums [i/2];
        }
        for(int i=1;i<2*n;i=i+2){
            ans [i]= nums [n+(i-1)/2];

        }
        return ans;
    }
};