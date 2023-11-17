// https://leetcode.com/problems/stone-game-vi

class Solution {
public:
    int stoneGameVI(vector<int>& A, vector<int>& B) {
  vector<vector<int>> sums;
        if(A.size()==1){return 1;}
        int n=A.size();
        for(int i=0;i<n;i++) {
            sums.push_back({A[i]+B[i], A[i], B[i]});
        }
        sort(sums.begin(),sums.end());
        // vector<int> res(2,0);
        // for(int i=0;i<n;i++) {
        //     res[i%2]+=sums[n-1-i][i%2+1];
        // }
        // return res[0]==res[1] ? 0 : (res[0]>res[1]? 1 : -1);
        int a=0,b=0;
        for(int i=A.size()-1;i>0;i=i-2){
            if(i>=0){
                a+=sums[i][1];
            }if(i-1>=0){
                b+=sums[i-1][2];
            }
        }
        if(a>b){return 1;}
       else if(a==b){return 0;}else return -1;
    }
};