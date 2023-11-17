// https://leetcode.com/problems/sum-of-subarray-ranges

class Solution {
public:
    int cnt=0;
    void fxn(vector<int>&nums,long long & ans,int index,vector<int>&v){
        if(index>=nums.size()){
            // cnt++;
            int mxm=INT_MIN,mnm=INT_MAX;
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
                if(v[i]>mxm)mxm=v[i];
                if(v[i]<mnm)mnm=v[i];
            }
            cout<<endl;
            if(v.size())
            ans+=mxm-mnm;
            return ;
        }
        v.push_back(nums[index]);
        fxn(nums,ans,index+1,v);
        v.pop_back();
        fxn(nums,ans,index+1,v);
    }
    long long subArrayRanges(vector<int>& nums) {
       int n=nums.size();
        long long ans=0;
        // vector<int>v;
        // fxn(nums,ans,0,v);
        // cout<<cnt;
        // return ans;
        for(int i=0;i<n;i++){
             vector<int>v;
               int mxm=INT_MIN,mnm=INT_MAX;
            for(int j=i;j<n;j++){
                v.push_back(nums[j]);
                if(nums[j]>mxm)mxm=nums[j];
                if(nums[j]<mnm)mnm=nums[j];
            if(v.size())
            ans+=mxm-mnm;
            }
        }
        
        return ans;
    }
};