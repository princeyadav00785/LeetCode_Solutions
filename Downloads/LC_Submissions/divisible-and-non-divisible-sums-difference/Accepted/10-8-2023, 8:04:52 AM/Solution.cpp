// https://leetcode.com/problems/divisible-and-non-divisible-sums-difference

class Solution {
public:
    int differenceOfSums(int n, int m) {
        long long sum =0;
        for(int i=1;i<=n;i++){
            if(i%m==0)sum-=i;
            else sum+=i;
        }
        return sum;
    }
};