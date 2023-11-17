// https://leetcode.com/problems/minimum-time-to-make-rope-colorful

class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int sum = 0;
        for(int i = 0; i< neededTime.size(); i++){
            if(colors[i]==colors[i+1]){
                 sum += neededTime[i];}
        }
return sum;
    }
};