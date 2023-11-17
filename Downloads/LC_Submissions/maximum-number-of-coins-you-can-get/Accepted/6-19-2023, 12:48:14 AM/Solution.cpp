// https://leetcode.com/problems/maximum-number-of-coins-you-can-get

class Solution {
public:
    int maxCoins(vector<int>& v) {
        int n = v.size();
        sort(v.begin(),v.end());
        int k= n/3,i=n-2;
        long long sum=0;
        while(k--){
            sum+=v[i];
            i=i-2;
        }
        return sum;
    }
};
// 1 2 3   4 \ 5 6\    7 8\ 9
 //  2        5        8
// 9 8 1   7 6 2     5 4 3
// 1 2 2   4 7 8 