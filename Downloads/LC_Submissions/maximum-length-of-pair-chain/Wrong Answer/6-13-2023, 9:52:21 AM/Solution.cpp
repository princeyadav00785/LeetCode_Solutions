// https://leetcode.com/problems/maximum-length-of-pair-chain

class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
//    sort(pairs.begin(),pairs.end(),[&] (vector<int> &a,vector<int> &b){return a[1]<b[1];});
//         int cnt=0;
//           int b=pairs[0][1];
//         for(int i=1;i<pairs.size();i++){
//             int c=pairs[i][0];
              
//                 if(b<c){cnt++;
//                        b=pairs[i-1][1];}
//         }
//        if(cnt!=0){ return cnt+1;}else  return cnt;
           sort(pairs.begin(),pairs.end());
        int ct=0;
        int prev=pairs[0][1];
        for(int i=1;i<pairs.size();i++){
            if(pairs[i][0]>prev){
                ct++;
                prev=pairs[i][1];
            }
        }
        
        return ct+1;
    }
};



//  -10 -8   -6 -4^  -5 0  -4 7  1,7   8,9  6,10   9,10
//    sort(pairs.begin(),pairs.end(),[&] (vector<int> &a,vector<int> &b){return a[1]<b[1];});
//         int ct=0;
//         int prev=pairs[0][1];
//         for(int i=1;i<pairs.size();i++){
//             if(pairs[i][0]>prev){
//                 ct++;
//                 prev=pairs[i][1];
//             }
//         }
        
//         return ct+1;