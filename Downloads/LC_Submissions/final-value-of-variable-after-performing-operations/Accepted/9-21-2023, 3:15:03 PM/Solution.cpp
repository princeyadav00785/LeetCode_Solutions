// https://leetcode.com/problems/final-value-of-variable-after-performing-operations

class Solution {
public:
    
    int finalValueAfterOperations(vector<string>& v) {
    int ans=0;
        for(int i=0;i<v.size();i++){
   string s=v[i];
            if(s[1]=='+')ans++;
            else ans--;
            
        }
        
        return ans;
    }
};