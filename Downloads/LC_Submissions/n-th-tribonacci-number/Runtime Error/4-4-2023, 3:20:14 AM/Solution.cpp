// https://leetcode.com/problems/n-th-tribonacci-number

class Solution {
public:
    int tribonacci(int n) {
        int arr[n+2];
        arr[0]=0;
        arr[1]=1;
        arr[2]=1;
        for(int i=3;i<=n;i++){
            arr[i]= arr[i-1]+arr[i-2]+arr[i-3];
        }
        return arr[n];
    }
};