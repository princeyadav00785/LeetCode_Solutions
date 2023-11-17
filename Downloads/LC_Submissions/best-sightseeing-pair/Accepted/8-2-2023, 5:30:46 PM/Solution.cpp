// https://leetcode.com/problems/best-sightseeing-pair

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& A) {
       int ans =A[0];
        int prevBestIdx =0;
        for(int j=1;j<A.size();j++){
            ans = max(ans, A[prevBestIdx]+prevBestIdx+A[j]-j);
            if(A[prevBestIdx ]+prevBestIdx <A[j]+j){
                prevBestIdx =j;
            }
        }
        return ans;}
};
// 8 2 7 5 10
// 0 0 3 -1 2