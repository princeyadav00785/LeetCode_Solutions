// https://leetcode.com/problems/sort-the-people

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> v;
        map<int ,string ,greater<int>> mp;
        for(int i=0;i<heights.size();i++){
            mp.insert({heights[i],names[i]});
        }
        for(auto x: mp){
            v.push_back(x.second);
        }
        return v;
    }
};