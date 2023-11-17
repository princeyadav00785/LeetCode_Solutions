// https://leetcode.com/problems/height-checker

class Solution {
public:
    int heightChecker(vector<int>& h) {
       vector<int> v(h.size(),0);
        
        for(int i=0;i<h.size();i++){
            v[i]=h[i];
        }
        int cnt=0;
        sort(v.begin(),v.end());
        for(int i=0;i<h.size();i++){
            if(v[i]!=h[i]){
                cnt++;
            }
        }
        return cnt;
    }
};