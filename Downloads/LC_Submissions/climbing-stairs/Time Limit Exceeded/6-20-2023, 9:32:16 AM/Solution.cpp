// https://leetcode.com/problems/climbing-stairs

class Solution {
public:
    int count(int n){
        if(n<0)return 0;
        if(n==0){
            return 1;
        }if(n==1){
            return 1;
        }
        return count(n-1)+count(n-2);
    }
    int climbStairs(int n) {
        int ans=0;
        ans = count(n);
        return ans;
    }
};