// https://leetcode.com/problems/merge-similar-items

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int> mpp;
        
        for(auto it:items1){
            mpp[it[0]]+=it[1];
        }
        
        for(auto it:items2){
            mpp[it[0]]+=it[1];
        }
        
        vector<vector<int>> ans;
        
        for(auto it:mpp){
            ans.push_back({it.first,it.second});
        }
        
        return ans;
    }
};