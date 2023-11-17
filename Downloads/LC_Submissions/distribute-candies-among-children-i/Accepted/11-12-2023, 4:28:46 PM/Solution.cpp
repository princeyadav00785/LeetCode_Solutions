// https://leetcode.com/problems/distribute-candies-among-children-i

class Solution {
public:
          int ans=0;
    
void fxn(int sum , int ind,vector<int>&v,int l){
  if(ind>2||sum<0)return;
    if(ind==3||sum==0){
        
       int f=0;
    
        for(int i=0;i<3;i++ ){
            if(v[i]>l)f=1;
        }
        if(f==0){ans++;
                }
        return ;
    }
   
    v[ind]++;
    fxn(sum-1,ind,v,l);
    v[ind]--;
    fxn(sum,ind+1,v,l);
}
    int distributeCandies(int n, int limit) {
        vector<int>v(3,0);
    fxn(n,0,v,limit);
    return ans;
    }
};