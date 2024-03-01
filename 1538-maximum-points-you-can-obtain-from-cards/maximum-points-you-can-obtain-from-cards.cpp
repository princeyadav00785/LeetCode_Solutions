class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        long long  ans=0;
        long long sum=0,a=0;
        int n=c.size();
        
        for(int i=0;i<c.size();i++)sum+=c[i];
        
        for(int i=0;i<n-k;i++){
            a+=c[i];
        }
        ans=max(sum-a,ans);
        int j=0;
        for(int i=n-k;i<n;i++){
            a+=c[i];
            a-=c[j++];
               ans=max(sum-a,ans);
        }
        return ans;
    }
};