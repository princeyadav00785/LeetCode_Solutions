// https://leetcode.com/problems/maximum-product-subarray

class Solution {
public:
    int maxProduct(vector<int>& v) {
      long long int maxm=v[0],ans =v[0];
        for(int i=1;i<v.size();i++){
            if(1ll*maxm*v[i]>maxm){
                maxm = 1ll*maxm*v[i];
            }else maxm= v[i];
            ans =max(maxm,ans);
        }
        return ans;
        
       
        
    }
};