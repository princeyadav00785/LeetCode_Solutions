// https://leetcode.com/problems/maximal-score-after-applying-k-operations

class Solution {

public:
    long long maxKelements(vector<int>& nums, int k) {
      long long  int max =0;
       long long int sum =0;
       long long int n =nums.size();
     
        for(int i =0; i<k; i++){
     sort(nums.begin(), nums.end());
            sum +=nums[n-1];
            if(nums[n-1]%3==0){
                nums[n-1]=nums[n-1]/3;
            }else nums[n-1]= nums[n-1]/3+1;
        }
        return sum;
    }
};