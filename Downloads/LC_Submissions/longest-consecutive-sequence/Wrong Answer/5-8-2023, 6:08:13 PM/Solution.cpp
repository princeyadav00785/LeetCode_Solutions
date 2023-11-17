// https://leetcode.com/problems/longest-consecutive-sequence

class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        if(arr.size()==0){return 0;}
        int N= arr.size();
           sort(arr.begin(),arr.end());
      int cnt=1,mxmcnt=1;
      for(int i=0;i<N-1;i++){
          if(arr[i]==arr[i+1]-1){
              cnt++;
          
      }else cnt=1;
      mxmcnt=max(mxmcnt,cnt);
    }
    return mxmcnt;
    }
};