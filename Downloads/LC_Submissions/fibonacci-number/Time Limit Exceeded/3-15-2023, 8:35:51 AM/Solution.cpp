// https://leetcode.com/problems/fibonacci-number

class Solution {
public:
    int fib(int n) {
        vector<int> v(30,0);
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(v[n]!=0){ return v[n];}else
       v[n]= fib(n-1)+fib(n-2);
         return v[n];
    }
};