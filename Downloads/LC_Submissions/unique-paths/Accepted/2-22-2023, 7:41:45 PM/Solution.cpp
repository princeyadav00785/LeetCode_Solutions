// https://leetcode.com/problems/unique-paths

class Solution {
public:
    int uniquePaths(int m, int n) {
        int N= m+n-2;
        int K= m-1;
        double ans =1; 
        for(int i=1;i<=K;i++){
            ans = ans *(N-K+i)/i;
        }
        return (int) ans;
        
        
        // int N = n + m - 2;// how much steps we need to do
        //     int k = m - 1; // number of steps that need to go down
        //     double res = 1;
        //     // here we calculate the total possible path number 
        //     // Combination(N, k) = n! / (k!(n - k)!)
        //     // reduce the numerator and denominator and get
        //     // C = ( (n - k + 1) * (n - k + 2) * ... * n ) / k!
        //     for (int i = 1; i <= k; i++)
        //         res = res * (N - k + i) / i;
        //     return (int)res;
    }
};