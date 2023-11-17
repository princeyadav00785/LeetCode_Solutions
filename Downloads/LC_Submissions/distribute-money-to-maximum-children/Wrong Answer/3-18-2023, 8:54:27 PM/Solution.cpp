// https://leetcode.com/problems/distribute-money-to-maximum-children

class Solution {
public:
    int distMoney(int m, int c) {
         if(c>m){
            return -1;
        }
        if(m<8){
            return 0;
        }
             m = m-c;
        int a =0,b=0,ans=0;
        a= m/7;
        b=m%7;
       
        cout<<a<<" "<<b<<" "<<endl;
        if(b==3){
            ans =a-1;
            // cout<<"yadav";
        }else ans =a;
        return ans;
        
    }
};