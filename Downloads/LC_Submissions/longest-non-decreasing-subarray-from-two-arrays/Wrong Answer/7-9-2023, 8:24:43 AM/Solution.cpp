// https://leetcode.com/problems/longest-non-decreasing-subarray-from-two-arrays

class Solution {
public:
    int maxNonDecreasingLength(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<int>ans(n,0);
        ans[0]=min(nums1[0],nums2[0]);
        int mnm = ans[0];
        for(int i=1;i<n;i++){
            if(nums1[i]>mnm&&nums2[i]>mnm){
 ans[i]=min(nums1[i],nums2[i]);  
                mnm= ans[i];
            }else{
                ans[i]= max(nums1[i],nums2[i]);
                mnm= ans[i];
            }
            
        }
        
        int cnt=1,mxm=0;
        for(int i=1;i<n;i++){
            // cout<<ans[i]<<" ";
            mxm=max(mxm,cnt);
            if(ans[i]>ans[i-1]){cnt++; }
            else {
                cnt=1;
            }
                        mxm=max(mxm,cnt);
        }
        
        return mxm;
    }
};

//  nums1 = [1,3,2,1], nums2 = [2,2,3,4]