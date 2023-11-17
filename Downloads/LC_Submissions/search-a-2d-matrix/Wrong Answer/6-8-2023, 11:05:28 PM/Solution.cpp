// https://leetcode.com/problems/search-a-2d-matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int k) {
        int m= v.size();
        int n=v[0].size(),b=0;
        for(int i=0;i<m;i++){
            if(v[i][n-1]>k){
                b= i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(v[b][i]==k){
                return true;
            }
        }
        
        return false;
    }
};