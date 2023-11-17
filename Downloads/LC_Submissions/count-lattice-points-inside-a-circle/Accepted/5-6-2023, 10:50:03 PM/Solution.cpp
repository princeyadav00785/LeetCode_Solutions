// https://leetcode.com/problems/count-lattice-points-inside-a-circle

class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
//         x2+y2-r2<0;
      set<pair<int,int>> s;
        int a=0,b=0,c=0;
        for(auto x: circles ){
            a=x[0];
            b=x[1];
            c=x[2];
            for(int i=0;i<=a+c;i++){
                for(int j=0;j<=b+c;j++){
                    if(pow(i-a,2)+pow(j-b,2)-pow(c,2)<=0){
                        s.insert({i,j});
                    }
                }
            }
            
        }
        // for(auto y:s){
        //     cout<<y.first<<" "<<y.second<<endl;
        // }
        return s.size();
    }
};