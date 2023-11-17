// https://leetcode.com/problems/maximum-ice-cream-bars

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        long long int cnt=0,sum=0;
        for(auto x :costs){
            if(sum+x<=coins){
                sum+=x;
                cnt++;
            }else break;
        }
        return cnt;
    }
};