// https://leetcode.com/problems/minimum-equal-sum-of-two-arrays-after-replacing-zeros

class Solution {
public:
    int minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = accumulate(nums1.begin(), nums1.end(), 0LL);
        long long sum2 = accumulate(nums2.begin(), nums2.end(), 0LL);

        long long diff = abs(sum1 - sum2);
  int a=0,b=0;
       for(int i=0;i<nums1.size();i++){
           if(nums1[i]==0)a++;
       }
     for(int j=0;j<nums2.size();j++)if(nums2[j]==0)b++;
        if(a==b&&a==0)return diff?-1:0;
      
        if(a==0||b==0&&diff!=0)return -1;
       int ans=0;
       if(sum1>sum2){
          ans= sum1+a;
       }else if(sum1<sum2){
           ans= sum2+b;
       }else if(sum1==sum2){
           return a==b;
       }
        return ans;
    }
};
