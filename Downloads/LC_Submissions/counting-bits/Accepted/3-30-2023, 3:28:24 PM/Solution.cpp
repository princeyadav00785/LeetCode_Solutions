// https://leetcode.com/problems/counting-bits

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> t(n+1,0);
        // for(int i=1;i<=n;i++){
        //     ans[i]=ans[i/2]+i/2;
        // }
        for(int i = 1; i<=n; ++i)
            t[i] = t[i/2] + i%2;
        return t;
    }
};