// https://leetcode.com/problems/self-dividing-numbers

class Solution {
public:
    bool fxn(int k){
        int digit=0,a=k;
        while(a>0){
            digit=a%10;
            if(digit==0)return false;
           if(digit>0) {if(k%digit!=0){return false;}}
            a=a/10;
        }
        
        return true;
    }
    vector<int> selfDividingNumbers(int l, int r) {
        vector<int> v;
        for(int i=l;i<r+1;i++){
            if(fxn(i)==true){
                v.push_back(i);
            }
        }
        return v;
    }
};