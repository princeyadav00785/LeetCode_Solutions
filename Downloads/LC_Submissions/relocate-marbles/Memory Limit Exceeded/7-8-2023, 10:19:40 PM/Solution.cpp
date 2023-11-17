// https://leetcode.com/problems/relocate-marbles

class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& a, vector<int>& b) {
        int n=0;
        for(int i=0;i<nums.size();i++){
            // cout<<nums[i]<<" ";
            if(nums[i]>n)n=nums[i];
            // cout<<n<<" ";
        }
        for(int i=0;i<a.size();i++){
            if(a[i]>n)n=a[i];
            if(b[i]>n)n=b[i];
        }
        
        // cout<<n;
        
        vector<int>v(n+1,0);
        for(int i=0;i<nums.size();i++){
            int j= nums[i];
            v[j]+=1;;
        }
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i])
{            v[b[i]]+=v[a[i]];
            v[a[i]]=0;}
        }
        vector<int>ans;
        for(int i=0;i<=n;i++){
            if(v[i])ans.push_back(i);
        }
        return ans;
    }
};