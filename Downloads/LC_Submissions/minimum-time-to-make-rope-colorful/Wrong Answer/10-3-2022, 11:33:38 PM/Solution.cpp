// https://leetcode.com/problems/minimum-time-to-make-rope-colorful

class Solution {
int min(int a , int b){
    if(a>b){
        return b;
    }else{return a;}
}
public:
    int minCost(string colors, vector<int>& neededTime) {
        int sum = 0;
        for(int i = 0; i< neededTime.size(); i++){
            if(colors[i]==colors[i+1]){
                int a = min(neededTime[i],neededTime[i+1]);
                 sum += a;
            }
        }
return sum;
    }
};