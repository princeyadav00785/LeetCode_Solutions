// https://leetcode.com/problems/successful-pairs-of-spells-and-potions

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
            int cnt=0;
            for(int j=0;j<potions.size();j++){

                if(1ll*spells[i]*potions[j]<success){
                    cnt++;
                }else break;
               
            }
            ans.push_back(potions.size()-cnt);
        }
        
        return ans;
    }
};