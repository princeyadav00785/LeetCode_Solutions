// https://leetcode.com/problems/successful-pairs-of-spells-and-potions

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        vector<int>dp(1e5+1,0);
      
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
              if(dp[i]!=0){
              ans.push_back(dp[i]);
        }
          else  {int cnt=0;
            for(int j=0;j<potions.size();j++){

                if(1ll*spells[i]*potions[j]<success){
                    cnt++;
                }else break;
               
            }
          dp[i]= potions.size()-cnt;
              ans.push_back(potions.size()-cnt);}
        }
        
        return ans;
    }
};