// https://leetcode.com/problems/minimum-penalty-for-a-shop

class Solution {
public:
    int bestClosingTime(string s) {
        int sum=0,mxm=0,index=-1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='Y'){
                sum++;
            }else sum--;
            if(sum>mxm){
                mxm=sum;
                index=i;
            }
        }
        
        // if(index==-1){return -1;}else
            return index+1;
    }
};