// https://leetcode.com/problems/minimum-operations-to-make-array-equal-ii

class Solution {
public:
    long long minOperations(vector<int>& n1, vector<int>& n2, int k) {
      int s1=0,s2=0;
           int a=0;
        for(int i=0;i<n1.size();i++){
            s1+=n1[i];
            s2+=n2[i];
            a += abs(n1[i]-n2[i]);
        }
        if(s1!=s2)return -1;
     return a/(2*k);
    }
};