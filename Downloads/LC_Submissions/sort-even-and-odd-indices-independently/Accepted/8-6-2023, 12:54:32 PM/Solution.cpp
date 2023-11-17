// https://leetcode.com/problems/sort-even-and-odd-indices-independently

class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>odd1;
        vector<int>even1;
        for(int i=0;i<nums.size();i++){
      
            if(i%2==0){
                      even1.push_back(nums[i]);}
            else {odd1.push_back(nums[i]);
                  }
        }
        sort(odd1.begin(),odd1.end(),greater<int>());
        sort(even1.begin(),even1.end());
        vector<int>ans(nums.size(),0);
        int l=0,m=0;
        for(int i=1;i<nums.size();i=i+2){
            ans[i]=odd1[l++];
        }
         for(int i=0;i<nums.size();i=i+2){
            ans[i]=even1[m++];
        }
        
      
    return ans;
    }
};