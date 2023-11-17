// https://leetcode.com/problems/find-the-difference-of-two-arrays

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp1;
         map<int,int>mp2;
        
        for(int i=0;i<nums1.size();i++){
            mp1[nums1[i]]++;
        }
         for(int i=0;i<nums2.size();i++){
            mp2[nums2[i]]++;
        }
        vector<vector<int>>ans;
        vector<int>a;
        vector<int>b;
        for(auto x:mp1){
            if(!mp2[x.first]){a.push_back(x.first);}
        }
         for(auto x:mp2){
            if(!mp1[x.first]){b.push_back(x.first);}
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};