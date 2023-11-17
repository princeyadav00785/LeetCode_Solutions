// https://leetcode.com/problems/ways-to-express-an-integer-as-sum-of-powers

class Solution {
public:
    vector<long long int>v;
    
    void fxn(vector<long long int>&v,int n,int &cnt,int ind,int sum){
        if(ind>v.size()-1){
            if(sum==0){cnt++;}
            return ;
        }
        fxn(v,n,cnt,ind+1,sum-v[ind]);
        fxn(v,n,cnt,ind+1,sum);
    }
    int numberOfWays(int n, int x) {
        int i=1,t=1;
    while(t==1){
        long long int a=pow(i,x);
        if(a<=n){
            v.push_back(a);
        }else{t=0;}
        i++;
    }    
        int cnt=0;
        fxn(v,n,cnt,0,n);
        return cnt;
    }
};