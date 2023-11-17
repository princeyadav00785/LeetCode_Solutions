// https://leetcode.com/problems/longest-consecutive-sequence

class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        if(arr.size()==0){return 0;}
        int N= arr.size();
           sort(arr.begin(),arr.end());
        map<int,int> mp;
        for(int i=0;i<N;i++){
            mp[arr[i]]++;
        }
      int cnt=1,mxmcnt=1;
     set<int>s;
        for(int i=0;i<N;i++){
            s.insert(arr[i]);
        }
      // for(int i=0;i<N;i++){
          for(auto x:s){

          
          if(mp[x+1]){
              cnt++;
             
          
      }else cnt=1;
      mxmcnt=max(mxmcnt,cnt);
    }
    return mxmcnt;
    }
};