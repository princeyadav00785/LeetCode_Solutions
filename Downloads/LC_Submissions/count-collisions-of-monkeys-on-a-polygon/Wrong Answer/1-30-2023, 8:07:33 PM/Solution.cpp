// https://leetcode.com/problems/count-collisions-of-monkeys-on-a-polygon

class Solution {
    public:
    int power(int a,int b){
       long long int m =1000000007;
        int ans =1;
        for(int i=0;i<b;i++){
            ans = (ans*a)%m;
        }
        return ans;
    }
public:
    int monkeyMove(int n) {
       long long int ans = power(2,n)-2;
        return ans;
    }
};