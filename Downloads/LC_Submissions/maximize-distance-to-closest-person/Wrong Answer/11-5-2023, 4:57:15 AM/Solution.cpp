// https://leetcode.com/problems/maximize-distance-to-closest-person

class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        vector<int>v;
        int ans=0;
        v.push_back(-1);
        for(int i=0;i<seats.size();i++){
            if(seats[i])v.push_back(i);
        }
        v.push_back(seats.size());
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        for(int i=1;i<v.size();i++){
            
            int diff= 0;
             if(v[i]==seats.size()){
                 diff= seats.size()-1-v[i-1];
                 ans= max(diff,ans);
                               }
           else {diff=  v[i]-v[i-1];
            if(diff/2>ans)ans=diff/2;}
        }
        return ans;
    }
};