// https://leetcode.com/problems/candy

class Solution {
public:
    int candy(vector<int>& v) {
        int cnt=0,x=1;
        for(int i=0;i<v.size();i++){
            if(i==0){
                if(v[1]<v[0])
                {
                    cnt+=x++;
                }else x=1;
            }
                else if(i==v.size()-1){
                    if(v[v.size()-1] >v[v.size()-2])
                     {
                    cnt+=x++;
                }else x=1;
                }
                    else{
                        if(v[i]>v[i-1]||v[i]>v[i+1])
                             {
                    cnt+=x++;
                }else x=1;
                    }
        }
        return cnt+v.size();
    }
};