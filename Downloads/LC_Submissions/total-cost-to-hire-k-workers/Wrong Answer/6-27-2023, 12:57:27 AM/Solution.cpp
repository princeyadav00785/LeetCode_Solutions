// https://leetcode.com/problems/total-cost-to-hire-k-workers

class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int c) {
        sort(costs.begin(),costs.end());
        long long sum=0;
        for (int i=0;i<k;i++)
            sum+=costs[i];
        
        return sum;
    }
};