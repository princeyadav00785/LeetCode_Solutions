// https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer

class Solution {
    int lft(vector<int>&v){
        int ind =0;
        int l=0,h=v.size()-1;
        while(l<=h){
            int m = (l+h)/2;
            if(v[m]>=0){
              ind =m;
                h=m-1;
            }else{
                l=m+1;
            }
        }
        return ind;
    }
public:
    int maximumCount(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){cnt++;}
        }
        int ind=0;
        ind = lft(nums);
        cout<<ind;
        int ans= (nums.size()-ind)-cnt;
        cout<<" "<<ans;
        if(ind>ans){return ind;}else return ans;
    }
};