// https://leetcode.com/problems/minimum-operations-to-make-the-array-alternating

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
       map<int,int>mp;
        map<int,int>mp2;
        int n=nums.size();
        if(n==1)return 0;
        int max1=0,max2=0;
        for(int i=0;i<nums.size();i=i+2){
            mp[nums[i]]++;
        }
        int a=0,b=0;
        for(int i=1;i<n;i=i+2)mp2[nums[i]]++;
        for(auto x:mp){
            if(x.second>max1){max1=x.second;a=x.first;}
        }
         for(auto x:mp2){
            if(x.second>max2){max2=x.second;b=x.first;}
        }
        if(a==b){
            if(max1>max2){
                max2=0;
                 for(auto x:mp2){
            if(x.second>max2&&x.first!=a){max2=x.second;b=x.first;}
        }
            }
            else{
                              max1=0;
                 for(auto x:mp){
            if(x.second>max1&&x.first!=b){max1=x.second;a=x.first;}
        }  
            }
        }
        
        return n-(max1+max2);
    }
};