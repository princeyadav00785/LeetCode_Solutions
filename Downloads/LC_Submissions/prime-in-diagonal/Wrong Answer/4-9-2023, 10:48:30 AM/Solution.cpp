// https://leetcode.com/problems/prime-in-diagonal

class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
                vector<int> v;
          int mxm=-1;
         v.push_back(nums[0][0]);
         v.push_back(nums[1][1]);
         v.push_back(nums[2][2]);
         v.push_back(nums[0][2]);
         v.push_back(nums[2][0]);
        for(int i=0;i<6;i++){
            int a=0;
           for(int j=2;j<v[i];j++){
               if(v[i]%j==0){
                    a=1;
               }
           } 
            if(a==0){
                if(v[i]>mxm){mxm=v[i];}
            }
        }
        
        return mxm;
        
    }
    
};