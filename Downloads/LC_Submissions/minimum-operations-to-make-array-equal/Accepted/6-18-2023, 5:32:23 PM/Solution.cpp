// https://leetcode.com/problems/minimum-operations-to-make-array-equal

class Solution {
public:
    int minOperations(int n) {
        int m=n/2;
        long long ans=0;
        if(n%2==0){
            ans= (m*m);
        }else {
            ans= m*(m+1);
        }
        return ans;
    }
};