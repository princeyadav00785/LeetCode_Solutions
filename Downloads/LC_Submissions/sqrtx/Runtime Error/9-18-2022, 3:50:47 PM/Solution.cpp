// https://leetcode.com/problems/sqrtx

class Solution {
public:
    int mySqrt(int x) {
//      int s = 1;
//         int e = x/2;
//         int ans = 1;
//         while(s<=e){
//             int mid = s+(e-s)/2;
//             if(mid>x/mid){
//             e = mid -1;
            
//         }else if(mid<x/mid){
//             s =  mid+1;
//             ans = mid;
//         }else if(mid ==  x /mid){
//             ans = mid;
//         }}
//         return ans;
         
    //       long r = x;
    // while (r*r > x)
    //     r = (r + x/r) / 2;
    // return r;
    // }
       int i =1;
     long sq = 1;
        while(sq<=x){
            i = i+ 1;
            sq= i*i;
        
            
        }return i-1;
    }
};