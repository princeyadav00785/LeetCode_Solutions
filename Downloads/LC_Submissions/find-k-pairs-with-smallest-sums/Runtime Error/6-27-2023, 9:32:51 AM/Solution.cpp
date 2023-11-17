// https://leetcode.com/problems/find-k-pairs-with-smallest-sums

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
           vector<vector<int>> ans;
        int a=0,b=0;
        long long m= nums1.size()*nums2.size();
        if(k>m)k=m;
        while(k--){
            vector<int>v;
            v.push_back(nums1[a]);
            v.push_back(nums2[b]);
            ans.push_back(v);
            if(a+1>=nums1.size()){
                b++;
            }else if( b+1>=nums2.size())a++;
                else
{            if(nums1[a+1]<nums2[b+1]){a++;}
            else if(nums1[a+1]>nums2[b+1]){b++;}
             else {
                 if(a<nums1.size()-1)a++;
                 else b++;
             }}
        }
        return ans;
    }
};