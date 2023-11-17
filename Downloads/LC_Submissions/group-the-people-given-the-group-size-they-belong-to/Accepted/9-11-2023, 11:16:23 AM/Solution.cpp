// https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to

class Solution {
public:

    vector<vector<int>> groupThePeople(vector<int>& nums) {
        vector<int>adj[nums.size()+1];
        for(int i=0;i<nums.size();i++){
             adj[nums[i]].push_back(i);
        }
 
            vector<vector<int>> ans;
        for(int i=0;i<nums.size()+1;i++){
            if(adj[i].size()!=0){
                int n= adj[i].size();
                int a=0;
                
                int c= n/i;
                 vector<int>vct2;
                while(c--){
                    
                    for(int m=0;m<i;m++)
                    vct2.push_back(adj[i][a++]); 
                    ans.push_back(vct2);
                       for(int m=0;m<i;m++)
                    vct2.pop_back();
                }
                 
            }
            
           
        }
       return ans;
    }
};