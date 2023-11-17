// https://leetcode.com/problems/maximum-number-of-groups-entering-a-competition

class Solution {
public:
    int maximumGroups(vector<int>& v) {
      int n= v.size();
        int k=0;
        if(n==1)return 1;
        for(int i=0;i<n;i++){
            if( (i*(i+1))/2 >n){break;}
            else k=i; 
        }
        return k;
    }
};
// 3 5 6 7 10 12
//  3    5 6   7 10 12