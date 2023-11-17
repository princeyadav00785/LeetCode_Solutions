// https://leetcode.com/problems/count-operations-to-obtain-zero

class Solution {
public:
    int countOperations(int a, int b) {
        int cnt=0;
        while(a>0&&b>0){
            int c= min(a,b);
            if(a!=c)a=a-c;
           else if(b!=c)b=b-c;
           else if(a==b&&b==c){a=a-c;}
            cout<<a<<" ";
            cnt++;
        }
        return cnt;
    }
};