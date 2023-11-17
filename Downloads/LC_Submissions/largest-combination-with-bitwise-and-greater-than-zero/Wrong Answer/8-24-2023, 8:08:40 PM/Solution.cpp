// https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero

class Solution {
public:
    // [16,17,71,62,12,24,14]
    int largestCombination(vector<int>& v) {
        int n=v.size(),i=0;
        int cnt=1,mxm=0;
        int ans=0;
        while(i<n){
            int j=i;
            ans=ans&v[i];
            if(ans>0){
                while(ans>0&&i<n){
                    
                    ans=ans&v[i++];
                    cnt++;
                    mxm=max(mxm,cnt);
                }
                cnt=1;
            }
            else{
                ans=v[i];
                cnt=1;
            }
            i=j;
            ans=v[i];
            i++;
            
        }
        
        
        return mxm;
    }
};