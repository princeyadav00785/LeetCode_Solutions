// https://leetcode.com/problems/construct-the-lexicographically-largest-valid-sequence

class Solution {
public:
    vector<int> constructDistancedSequence(int n) {
       vector<int>ans(2*n-1,0);
        int a=n,b=n-1;
        int i=0;
        while(a>0){
            
               if(a!=1)   { if(i+a<2*n-1)     ans[i+a]=a;
                    if(i<2*n-1)    ans[i++]=a;}
            else {
                  ans[i++]=a;
            }
            
            a=a-2;
        }

        while(b>0){
            cout<<i<<" ";
        if(i<2*n-1&&ans[i]==0)  {
            ans[i]=b;
            if(i+b<2*n-1&&ans[i+b]==0&&b!=1) {
             
              ans[i+b]=b;
          }
                        b=b-2;
        }   
            
            i++;
        }
        return ans;
    }
};