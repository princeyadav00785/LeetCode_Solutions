// https://leetcode.com/problems/minimum-number-of-groups-to-create-a-valid-assignment

#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    map<int,int>mp;
    int fxn(int mid){
        
        int f=0,cnt=0;
        for(auto x:mp){
            if(x.second%mid>1)return 0;
            else{
                int a= x.second/mid;
                if(mid*a<x.second)a++;
                cnt+=a;
            }
        }
        return cnt;
    }
    int minGroupsForValidAssignment(std::vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        if(mp.size()==1)return 1;
        int mnm=INT_MAX;
        for(auto x:mp){
            if(x.second<mnm)mnm=x.second;
        }
        int l=1,h=mnm;
        int cnt=INT_MAX;
        while(l<=h){
            int mid=(l+h)/2;
            if(fxn(mid)){
              
                l=mid+1;
                cnt=min(cnt,fxn(mid));
            }else{
                h=mid-1;
            }
        }
        cout<<l<<" ";
        int mid=l;
        cnt=0;
         for(auto x:mp){
          
                int a= x.second/mid;
                if(mid*a<x.second)a++;
                cnt+=a;
            
        }
        return cnt;
    }
};
