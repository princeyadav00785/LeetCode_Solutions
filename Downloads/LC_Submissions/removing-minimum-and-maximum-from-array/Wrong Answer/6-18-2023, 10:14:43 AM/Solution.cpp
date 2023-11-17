// https://leetcode.com/problems/removing-minimum-and-maximum-from-array

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mnm =INT_MAX;
        int mxm = INT_MIN;
        int a=0,b=0,n=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mxm){a=i;mxm=nums[i];}
             if(nums[i]<mnm){b=i;mnm=nums[i];}
            
        }
        int f1=a;
        int f2=b;
        int b1=n-a;
        int b2=n-b;
     if(a>n-a){a=n-a;}
        if(b>n-b){b=n-b;}
        if((a==b1&&b==b2)||(a==f1&&b==f2)){
            return max(a,b)+1;
        }
        return a+b+2;
    }
};