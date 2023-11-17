// https://leetcode.com/problems/best-sightseeing-pair

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        long long int mxm=0;
        for(int i=0;i<values.size()-1;i++){
            for(int j=i+1;j<values.size();j++){
               long long  int cnt= values[i]+values[j]+i-j;
                if(cnt>mxm)mxm=cnt;
            }
        }
        return mxm;
    }
};