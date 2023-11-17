// https://leetcode.com/problems/determine-if-a-cell-is-reachable-at-a-given-time

class Solution {
public:
    bool isReachableAtTime(int x, int y, int a, int b, int k) {
       long long  int aa= abs(a-x),bb=abs(b-y);
        int c= max(aa,bb);
        int d= aa+bb-c;
        cout<<aa<<" "<<bb;
        if(c>k||(c==0&&(k>0&&k<2))){
            return false;
        }else {
        
            return true;
        
        }
        
        
        
        //  long long int x=abs(sx-fx),y=abs(sy-fy);
        // if(x>t||y>t)
        //     return false;
        // else
        // {
        //     if(x==0&&y==0)
        //         return false;
        //     return true;
        // }
    }
};