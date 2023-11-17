// https://leetcode.com/problems/third-maximum-number

class Solution {
public:
    int thirdMax(vector<int>& nums) {
      // long long  int mnm=INT_MIN;
      //   for(int i=0;i<nums.size();i++){
      //       if(nums[i]>=mnm){
      //           mnm=nums[i];
      //       }
      //   }
      //  long long int tmnm=INT_MIN;
      //      for(int i=0;i<nums.size();i++){
      //       if(nums[i]>=tmnm&&nums[i]!=mnm){
      //           tmnm=nums[i];
      //       }
      //   }
      //   long long        int hmnm=INT_MIN;
      //      for(int i=0;i<nums.size();i++){
      //       if(nums[i]>=hmnm&&nums[i]!=tmnm&&nums[i]!=mnm){
      //           hmnm=nums[i];
      //       }
      //   }
      //   if(hmnm==INT_MIN){return mnm;}else return hmnm;
        int n=nums.size();
        int a=INT_MIN,b=INT_MIN,c=INT_MIN;
        bool flg=0;
        for(int i=0;i<n;i++){
            a=max(a,nums[i]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=a){
                b=max(b,nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=a&&nums[i]!=b){
                c=max(c,nums[i]);
                flg=1;
            }
        }
        if(flg){
            return c;
        }else return a;
    }
};