// https://leetcode.com/problems/determine-the-winner-of-a-bowling-game

class Solution {
public:
    int isWinner(vector<int>& p, vector<int>& q) {
        int n=0;
        int sum=0,sum2=0;
//         4 10 7 9 
        for(int i=0;i<p.size();i++){
            if(p[i]==10&&n==0){
                sum+=10;
                n=2;
                // cout<<sum<<" ";
            }
           else if(n>0){
                sum+=2*p[i];
                n--;
                // cout<<sum<<" ";
            }else {
                sum+=p[i];
                // cout<<sum<<" ";
            }
        }
        // cout<<sum;
        // return 0;
        n=0;
         for(int i=0;i<q.size();i++){
            if(q[i]==10&&n==0){
                sum2+=10;
                n=2;
            }
          else  if(n>0){
                sum2+=2*q[i];
                n--;
            }else {
                sum2+=q[i];
            }
        }
        cout<<sum <<" "<<sum2;
        if(sum>sum2){return 1;}else if(sum2>sum){return 2;}else return 0;
        
    }
};