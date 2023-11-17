// https://leetcode.com/problems/prime-in-diagonal

class Solution {
public:
    // int diagonalPrime(vector<vector<int>>& nums) {
//                 vector<int> v;
//           int mxm=-1;
//          v.push_back(nums[0][0]);
//          v.push_back(nums[1][1]);
//          v.push_back(nums[2][2]);
//          v.push_back(nums[0][2]);
//          v.push_back(nums[2][0]);
//         for(int i=0;i<6;i++){
//             int a=0;
//            for(int j=2;j<v[i];j++){
//                if(v[i]%j==0){
//                     a=1;
//                    break;
//                }
//            } 
//             if(a==0){
//                 if(v[i]>mxm){mxm=v[i];}
//             }
//         }
        
//         return mxm;
        bool isPrime(int n){
      if(n <= 1) return false;
      for (int i = 2; i * i <= n; i++){
        if (n % i == 0)return false;
      }
      return true;
    }
    int diagonalPrime(vector<vector<int>>& v) {
      int n = v.size(), ans = INT_MIN;
      for(int i = 0; i < n; i++){
        if(isPrime(v[i][i])) ans = max(ans, v[i][i]);
        if(isPrime(v[i][n - i - 1])) ans = max(ans, v[i][n - i - 1]);
      }
      return ans == INT_MIN ? 0 : ans;
        
    }
    
};