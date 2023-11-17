// https://leetcode.com/problems/climbing-stairs

class Solution {
public:
    int count(int n){
        int arr[n+1];
       arr[1]=1;
        arr[2]=2;
        if(n==1){
            return 1;
        }if(n==2){return 2;}
        for(int i=3;i<n+1;i++){
            arr[i]= arr[i-1]+arr[i-2];
        }
        
        return arr[n];
    }
    int climbStairs(int n) {
        int ans=0;
        ans = count(n);
        return ans;
    }
};