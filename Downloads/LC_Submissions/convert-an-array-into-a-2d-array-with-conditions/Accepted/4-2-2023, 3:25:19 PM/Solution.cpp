// https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
       
        map<int,int>mp;
        int rows=-1;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto x: mp){
            if(x.second>rows){
                rows = x.second;
            }
            
        }
        
        for(int i=0;i<rows;i++){
             vector<int>v;
           for(auto x:mp){
               if(x.second>=1){
                   v.push_back(x.first);
                      mp[x.first]--;
               }
              
           }
            ans.push_back(v);
            
        }
        
        
        return ans;
    }
};