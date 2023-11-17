// https://leetcode.com/problems/letter-tile-possibilities

class Solution {
public:
    int fxn(vector<int>&v){
        int sum=0;
        for(int i=0;i<26;i++){
            if(v[i]==0)continue;
            sum++;
            v[i]--;
            sum+=fxn(v);
            v[i]++;
        }
        
        
        
        
        return sum;
    }
    
    
    int numTilePossibilities(string t) {
        
        vector<int>v(26,0);
        for(int i=0;i<t.length();i++){
            v[t[i]-'A']++;
        }
       return  fxn(v);
        
    }
};