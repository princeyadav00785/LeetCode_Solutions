// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       int maximum =0;
         int n= candies.size();
       vector<bool> ans(n,0);
     
       for(int i=0;i<n;i++){
           if(candies[i]>maximum){
               maximum = candies[i];
           }
       } 
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>= maximum){
                ans[i] = true;
            }else ans[i] =false;
        }



       return ans;
    }
};