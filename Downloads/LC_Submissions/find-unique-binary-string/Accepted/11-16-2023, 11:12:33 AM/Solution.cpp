// https://leetcode.com/problems/find-unique-binary-string

class Solution {
public:
//     vector<string>v;
//     void fxn( int ind,int n){
        
//     }
    
    string findDifferentBinaryString(vector<string>& nums) {
        
        map<string,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int n= nums[0].length();
        string s="";
        for(int i=0;i<n;i++)s+='0';
        
        for(int i=0;i<n;i++){
             if(mp.find(s)==mp.end())return s;
            s[i]='1';
             if(mp.find(s)==mp.end())return s;
            for(int j=0;j<n;j++){
                s[j]='1';
                if(mp.find(s)==mp.end())return s;
                s[j]='0';
            }
            s[i]='0';
        }
    
    return s;
};
};