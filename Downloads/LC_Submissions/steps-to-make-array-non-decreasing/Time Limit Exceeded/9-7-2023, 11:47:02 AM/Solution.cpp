// https://leetcode.com/problems/steps-to-make-array-non-decreasing

class Solution {
public:
    int totalSteps(vector<int>& nums) {
        int cnt=0;
         vector<int>v;
        while(true){
            v.push_back(nums[0]);
           for(int i=1;i<nums.size();i++){
               if(nums[i]>=nums[i-1])v.push_back(nums[i]);
               // else i++;
           }
            // for(int i=0;i<v.size();i++){
            //     cout<<v[i]<<" ";
            // }
            // cout<<endl;
            int a= nums.size(),b=v.size();
            if(a==b)break;
            nums=v;
            v.clear();
            cnt++;
        }
        return cnt;
    }
};