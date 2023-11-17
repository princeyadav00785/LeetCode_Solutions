// https://leetcode.com/problems/minimum-operations-to-make-array-equal-ii

class Solution {
public:
    long long minOperations(vector<int>& n1, vector<int>& n2, int k) {
      long long  s1=0;
          long long a=0;
        int mnm =INT_MAX;
        if(k==0){
            if(n1==n2)return 0;
            else return -1;
        }
        for(int i=0;i<n1.size();i++){
            int diff=abs(n1[i]-n2[i]);
            if(diff%k!=0)return -1;
            if(diff!=0)
         {   mnm = min(mnm,diff);}
            s1+=(n1[i]-n2[i]);
            a += abs(n1[i]-n2[i]);
        }
        if(s1!=0)return -1;
        if(k>mnm){cout<<"test"; return -1;}

     return a/(2*k);
    }
};