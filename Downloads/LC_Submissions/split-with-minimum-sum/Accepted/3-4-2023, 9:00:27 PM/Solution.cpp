// https://leetcode.com/problems/split-with-minimum-sum

class Solution {
public:
    int splitNum(int num) {
     int n = log10(num)+1;
      int m =n;
        vector<int> v;
        
        while(m--){
            int d= num%10;
            v.push_back(d);
            num = num/10;
            
        }
        sort(v.begin(),v.end());
        int a=0,b=0;
        if(n==2){
            return v[0]+v[1];
        }
        if(n%2==0){
            int z=n/2,y=n/2;
          for(int i=0;i<n;i=i+2){
              a+= v[i]*pow(10,z);
              z--;
          }  
             for(int i=1;i<n;i=i+2){
              b+= v[i]*pow(10,y);
              y--;
          }  
            return (a+b)/10;
            
        }else {
            int k=n/2,l =n-k;
            for(int i=0;i<n;i=i+2){
              a+= v[i]*pow(10,k);
              k--;
          }  
             for(int i=1;i<n;i=i+2){
              b+= v[i]*pow(10,l);
              l--;
          }  
            return (a+b/100);
            
        }
        return 0;
    }
};