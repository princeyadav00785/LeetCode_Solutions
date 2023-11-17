// https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int>mp;
        vector<vector<int>>ans;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i][0]]=nums1[i][1];
        }
        for(int i=0;i<nums2.size();i++){
            if(mp[nums2[i][0]]!=0){
                vector<int>v;
                v.push_back(nums2[i][0]);
                v.push_back(nums2[i][1]+mp[nums2[i][0]]);
                ans.push_back(v);
                mp[nums2[i][0]]=0;
            }else{
                vector<int>v;
                v.push_back(nums2[i][0]);
                v.push_back(nums2[i][1]);
                ans.push_back(v);
            }
            
        }
        for(auto x: mp){
           if(x.second!=0) {vector<int>v;
            v.push_back(x.first);
            v.push_back(x.second);
            ans.push_back(v);}
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};