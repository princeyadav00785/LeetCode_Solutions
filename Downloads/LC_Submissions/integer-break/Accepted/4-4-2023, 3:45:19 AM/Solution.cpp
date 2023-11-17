// https://leetcode.com/problems/integer-break

class Solution {
public:
    int integerBreak(int n) {
//         int a,b,c;
//         if(n==2){
//            return 1; 
//         }
//         long long maxans=0;
//         long long mxm=0;
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=n-i;j++){
//                 for(int k=1;k<=n-i-j;k++){
//                    mxm= i*j*k; 
//                 }
//                 // maxans=max(maxans,mxm);
//             }
//              // maxans=max(maxans,mxm);
//         }
//  maxans=max(maxans,mxm);
//         return maxans;
        int x=n/3;
       int r=n%3;
       if(n==2||n==3) return n-1;
       if(r==1)return pow(3,x-1)*4;
       if(r>1)return pow(3,x)*r;
       return pow(3,x);
    }
};