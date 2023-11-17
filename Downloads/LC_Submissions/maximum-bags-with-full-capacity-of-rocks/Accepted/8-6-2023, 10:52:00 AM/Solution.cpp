// https://leetcode.com/problems/maximum-bags-with-full-capacity-of-rocks

class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int k) {
        vector<int>v(c.size(),0);
        for(int i=0;i<c.size();i++){
            v[i]=c[i]-r[i];
        }
        sort(v.begin(),v.end());
        int sum=0,i=0,cnt=0;
        while(sum<=k&&i<c.size()){
            sum+=v[i++];
            if(sum<=k)cnt++;
            
        }
        return cnt;
    }
};