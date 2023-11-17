// https://leetcode.com/problems/distribute-money-to-maximum-children

int distMoney(int m, int c){

        m = m-c;
        int a =0,b=0,ans=0;
        a= m/7;
        b=m%7;
        // cout<<a<<" "<<b<<" "<<endl;
        if(b!=3){
            ans =a;
            // cout<<"yadav";
        }else ans =a-1;
        return a;

}