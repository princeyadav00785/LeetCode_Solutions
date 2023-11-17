// https://leetcode.com/problems/minimum-seconds-to-equalize-a-circular-array

class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
        int mxm=0;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        if(mp.size()==1)return 0;
        for(auto x:mp){
            if(x.second>mxm)mxm=x.second;
        }
        int c=0;
        for(auto x:mp){
            if(x.second==mxm){c=x.first;}
        }
        
        int cnt=0;
        int ans=0;
        int n=nums.size();
        // cout<<c;
        // vector<int> ind;
        set<int>ind;
        while(true){
            if(cnt<n){
                
                for(auto x:ind){
                    nums[x]=c;
                
                }
                  
                
            for(int i=0;i<n;i++){
               
               if(nums[i]!=c){
                    if(nums[(i - 1 + n) % n]==c||nums[(i + 1 + n) % n]==c){
                        ind.insert(i);
                        cnt++;
                   }

                         
               }else if(nums[i]==c)cnt++;

            }
            }else break;
            ans++;
            
        }
        return ans;
    }
};