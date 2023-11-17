// https://leetcode.com/problems/minimum-cost-to-cut-a-stick

class Solution {
public:
    int fxn(int i,int j,vector<int>&cuts){
        if(i>j)return 0;
        int mnm=INT_MAX;
        for(int k=i;k<=j;k++){
            int temp=  cuts[j+1]-cuts[i-1]+fxn(i,k-1,cuts)+fxn(k+1,j,cuts);
            mnm= min(mnm,temp);
            }
        return mnm;
    }
    
    
    int minCost(int n, vector<int>& cuts) {
          int i=0,j=cuts.size();  
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        sort(cuts.begin(),cuts.end());
    
      return   fxn(i+1,j,cuts);
    }
};