// https://leetcode.com/problems/maximum-number-of-pairs-in-array

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
       map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            
        }
        int cnt=0,c=0;
        for(auto x:mp){
            if(x.second%2==0){cnt+=x.second/2;}else {cnt+=x.second/2;  c++;     }    
            
        }
        vector<int>v(2,0);
        v[0]=cnt;
        v[1]=c;
        return v;
        
    }
};