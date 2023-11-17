// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution {
public:
    int maxProfit(vector<int>& nums) {
//         int min=nums[0],profit=0,maxprofit=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]<min){
//                 min=nums[i];
//             }else {
//                 profit=nums[i]-min;
//             }
//             maxprofit= max(maxprofit,profit);
//         }
        
//         return maxprofit;
        int mnm=nums[0];
        int profit=0;
        for(int i=0;i<nums.size();i++){
            int p= 0;
            if(nums[i]<mnm)mnm=nums[i];
            else{
            p=  nums[i]-mnm;  
            }
            profit=max(profit,p);
        }
        return profit;
    }
};