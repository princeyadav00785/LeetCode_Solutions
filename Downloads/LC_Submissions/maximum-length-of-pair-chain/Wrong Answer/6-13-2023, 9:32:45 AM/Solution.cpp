// https://leetcode.com/problems/maximum-length-of-pair-chain

class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
      sort(pairs.begin(),pairs.end());
        int cnt=0;
        if(pairs.size()==1)return 1;
          int b=pairs[0][1];
        for(int i=1;i<pairs.size();i++){
            int c=pairs[i][0];
              
                if(b<c){cnt++;
                       b=pairs[i-1][1];}
        }
       if(cnt!=0){ return cnt+1;}else  return cnt;
    }
};