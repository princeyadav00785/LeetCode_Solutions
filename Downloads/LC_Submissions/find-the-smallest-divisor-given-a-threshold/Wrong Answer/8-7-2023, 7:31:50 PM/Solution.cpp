// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int m) {
                int l=1,r=0,n=nums.size();
        for(int i=0;i<n;++i) r=max(r,nums[i]);
        
        int mid=0,ans=0;
        while(l<=r){
            mid=(l+r)/2;
            int count=0,tempsum=0;
            for(int i=0;i<n;++i){
               if(nums[i]%mid==0){
                   count+=nums[i]/mid;
               }else{
                   count+= nums[i]/mid+1;
               }
            }
            count++; 
            
            if(count<=m) r=mid-1, ans=mid;
            else l=mid+1;
        }  
        return ans;
    }
};