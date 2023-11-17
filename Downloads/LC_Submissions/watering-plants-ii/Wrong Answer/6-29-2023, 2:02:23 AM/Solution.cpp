// https://leetcode.com/problems/watering-plants-ii

class Solution {
public:
    int minimumRefill(vector<int>& p, int ca, int cb) {
        int c1=0,c2=0;
        int sum=0;
        if(p.size()==1){
            int mxm= max(ca,cb);
            if(p[0]>mxm)return 1;
            else return 0;
        }
        for(int i=0;i<p.size()/2;i++){
        if(sum+p[i]>ca){
        c1++;
        sum=p[i];
        }
            sum+=p[i];
        }
        sum=0;
        for(int i=p.size()-1;i>=p.size()/2;i--){
            if(sum+p[i]>cb){
        c2++;
        sum=p[i];
        }
            sum+=p[i];
        }
        return c1+c2;
    }
};