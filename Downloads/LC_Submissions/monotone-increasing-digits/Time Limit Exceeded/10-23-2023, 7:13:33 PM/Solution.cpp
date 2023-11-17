// https://leetcode.com/problems/monotone-increasing-digits

class Solution {
public:
    bool fxn(int n){
        string s= to_string(n);
        int l= s.length();
        vector<int>v;
        vector<int>a;
        
        while(n){
            int d= n%10;
            v.push_back(d);
            n=n/10;
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<l;i++){
          a.push_back(v[i]);  
        }
        sort(a.begin(),a.end());
        if(a==v)return true;
        return false;
    }
    int monotoneIncreasingDigits(int n) {
        
        for(int i=n;i>0;i--){
            if(fxn(i))return i;
        }
        return 1;
    }
};