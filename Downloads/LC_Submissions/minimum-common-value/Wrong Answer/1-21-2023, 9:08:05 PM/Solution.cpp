// https://leetcode.com/problems/minimum-common-value

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v(nums1.size()+nums2.size(),0);
        
        for(int i =0;i<nums1.size();i++){
            v[i]=nums1[i];
            
        }
         for(int j =nums1.size();j<nums2.size()+nums1.size();j++){
            v[j]=nums2[j-nums1.size()];
            
        }
        int ans =-1;
        sort(v.begin(),v.end());
        
        
        for(int m =0; m<nums1.size()+nums2.size();m++){
            if(v[m]==v[m+1]){
                ans =v[m];
                break;
            }
        }
        return ans;
        
    }
};