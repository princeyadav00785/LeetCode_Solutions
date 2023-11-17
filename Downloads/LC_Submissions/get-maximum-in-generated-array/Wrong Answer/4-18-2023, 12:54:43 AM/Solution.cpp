// https://leetcode.com/problems/get-maximum-in-generated-array

class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> v(101,0);
        v[0]=0;
        v[1]=1;
        int mxm=-999;
        for(int i=2;i<=n;i++){
            if(i%2==0){
                v[i]=v[i/2];
            }else v[i]=v[i/2]+v[i/2+1];
            if(v[i]>mxm){mxm=v[i];}
        }
        // for(int i=0;i<n;i++){
        //     cout<<v[i]<<" ";
        // }
        
        return mxm;
    }
};