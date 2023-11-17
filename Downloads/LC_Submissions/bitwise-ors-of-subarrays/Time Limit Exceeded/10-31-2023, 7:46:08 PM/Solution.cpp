// https://leetcode.com/problems/bitwise-ors-of-subarrays

class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        set<int>s;
        for(int i=0;i<arr.size();i++){
            int a=0;
            for(int j=i;j<arr.size();j++){
                a= a|arr[j];
                s.insert(a);
            }
        }
        
        
        return s.size();
    }
};