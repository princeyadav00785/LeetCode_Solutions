// https://leetcode.com/problems/richest-customer-wealth

class Solution {
    int summ(vector<int> v){
        int ans=0;
        for(int i=0;i<v.size();i++){
ans +=v[i];
        }
        return ans ;
    }
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int a=0;
   for(int i=0;i<accounts.size();i++){
       a = max(a,summ(accounts[i]));
   }

        return a;
    }
};