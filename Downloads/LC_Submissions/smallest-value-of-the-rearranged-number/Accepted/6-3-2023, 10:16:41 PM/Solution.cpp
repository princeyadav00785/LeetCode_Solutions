// https://leetcode.com/problems/smallest-value-of-the-rearranged-number

class Solution {
public:
    long long smallestNumber(long long num) {
     vector<int> v;
        int p=0;
        if(num>0){p=1;}
        num=abs(num);
        if(num==0){return 0;}
        int zero=0;
        while(num){
            int digit = num%10;
            num=num/10;
            if(digit!=0)
            v.push_back(digit);
            else zero++;
        }
        sort(v.begin(),v.end());
        long long int ans=0;
        if(p==1){
            ans +=v[0];
           if(zero>0){
               ans= ans *(pow(10,zero));
           }
            for(int i=1;i<v.size();i++){
                ans = ans*10+ v[i];
            }
        }
        else{
                 for(int i=v.size()-1;i>-1;i--){
                     ans =ans*10+ v[i];
                 }
            if(zero>0){
               ans= ans *(pow(10,zero));
           }
            ans = ans*(-1);
        }
        return ans;
    }
};