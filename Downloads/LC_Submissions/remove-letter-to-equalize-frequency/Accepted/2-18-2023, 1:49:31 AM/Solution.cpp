// https://leetcode.com/problems/remove-letter-to-equalize-frequency

class Solution {
public:
    bool equalFrequency(string word) {
        
        if(word.size() == 1 || word.size() == 2)  return true ;
        
        unordered_map<char , int> mp;
        
        for(auto it : word)  mp[it]++ ;
        vector<int> x ;
        
        for(auto it : mp)    x.push_back(it.second) ;
        
        int n=x.size() , c=1 ;
        sort(x.begin() , x.end()) ;
        
        if(n == 1)  return true ;
        else if(x[0]==x[n-2] && x[n-2]==x[n-1] && x[0]==1)  return true ;
        else if(x[0]==x[n-2] && x[n-1]-x[0] == 1)   return true ;
        else if(x[0] == 1 && x[1]==x[n-1])  return true ;
        else return false ;
    }
};