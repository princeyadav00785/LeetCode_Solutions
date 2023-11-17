// https://leetcode.com/problems/gas-station

class Solution {
public:
    int canCompleteCircuit(vector<int>& a, vector<int>& c) {
        int s1=0,s2=0;
        int mxm=0;
        
        for(int i=0;i<a.size();i++){
            s1+=a[i];
            s2+=c[i];
            if(c[i]>mxm){mxm= c[i];}
        }
        if(s2>s1){return -1;}
         int ans=0;
        for(int i=0;i<c.size();i++){
            if(c[i]==mxm){ans=i;}
        }
        
        return (ans+1)%a.size();
    }
};