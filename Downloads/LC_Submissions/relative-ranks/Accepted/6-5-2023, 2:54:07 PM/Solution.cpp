// https://leetcode.com/problems/relative-ranks

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& v) {
       string ans[v.size()];
        priority_queue<pair<int,int>>q;
    for(int i=0;i<v.size();i++){
        q.push({v[i],i});
    }
        
        for(int i=0;i<v.size();i++){
            int a =q.top().second;
            
            if(i==0){
                ans[a]="Gold Medal";
            }
            else if(i==1){
                ans[a]= "Silver Medal";
            }
           else  if(i==2){
                ans[a]="Bronze Medal";
            }
            else{
                ans[a]=to_string(i+1);
            }
            q.pop();
            
        }
        vector<string >t;
        for(int i=0;i<v.size();i++){
            t.push_back(ans[i]);
        }
        return t;
    }
};