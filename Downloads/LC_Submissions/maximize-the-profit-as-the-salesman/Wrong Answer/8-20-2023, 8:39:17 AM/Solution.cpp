// https://leetcode.com/problems/maximize-the-profit-as-the-salesman

class Solution {
public:
    int mxm=0;
    void fxn(vector<vector<int>>& a,int x,int y, int ind,int sum){
        if(ind==a.size())return ;
        if(a[ind][0]>y){
              fxn(a,x,y,ind+1,sum);
            sum+=a[ind][2];
            x=a[ind][0];
                y=a[ind][1];
            mxm=max(sum,mxm);
            fxn(a,x,y,ind+1,sum);
            
        }else
            fxn(a,x,y,ind+1,sum);
        
        
    }
    
    int maximizeTheProfit(int n, vector<vector<int>>& offers) {
        fxn(offers,-1,-1,0,0);
        return mxm;
    }
};