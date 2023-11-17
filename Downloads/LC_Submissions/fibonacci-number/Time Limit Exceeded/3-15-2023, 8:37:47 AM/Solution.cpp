// https://leetcode.com/problems/fibonacci-number

class Solution {
public:
    int fib(int n) {
        vector<int> v(31,0);
        v[0]=0;
        v[1]=1;
        if(n==0){
            return v[0];
        }
        if(n==1){
            return v[1];
        }
        if(v[n]!=0){ return v[n];}else
       v[n]= fib(n-1)+fib(n-2);
         return v[n];
    }
};