// https://leetcode.com/problems/number-of-laser-beams-in-a-bank

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
    long long ans=0;
        int x=0,prev=0;

        for(int i=0;i<bank.size();i++){
            if(x!=0){prev=x;x=0;}
                  for(int j=0;j<bank[i].size();j++){
                      string s=bank[i];
            if(s[j]=='1')x++;
        }  
            if(x!=0){ans+=prev*x;}
        }
        return ans;
    }
};