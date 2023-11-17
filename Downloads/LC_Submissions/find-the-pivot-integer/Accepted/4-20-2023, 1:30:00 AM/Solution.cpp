// https://leetcode.com/problems/find-the-pivot-integer

class Solution {
public:
    int pivotInteger(int n) {
       // long long int total =(n*(n+1))/2;
       //  total=total/2;
       //  long long int sum=0,i=1;
       //  while(sum<=total){
       //     if((i*(i+1))/2==total){return i;}
       //      i++;
       //  }
       //  return -1;
          double x=sqrt((n*n+n)/2);
       if((int)x==x)
       return x;
       return -1;
    
    }
};