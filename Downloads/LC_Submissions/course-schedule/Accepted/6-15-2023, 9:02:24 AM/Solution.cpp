// https://leetcode.com/problems/course-schedule

class Solution {
public:
    bool canFinish(int V, vector<vector<int>>& p) {
        vector<int>adj[V];
         for(auto it:p){
             adj[it[1]].push_back(it[0]);
         }
         // code here

        	       vector<int> vis(V,0);
	       vector<int>deg(V,0);
	       for(int i=0;i<V;i++){
	           for(auto it :adj[i]){
	               deg[it]++;
	           }
	       }
	       queue<int>q;
	       vector<int>  topo;
	       for(int i=0;i<V;i++){
               if(deg[i]==0) {
                   q.push(i);
                 
               }
	       }
	       while(!q.empty()){
	        int a= q.front();
	        vis[a]=1;
	        topo.push_back(a);
	        q.pop();
	        for(auto it:adj[a]){
	            deg[it]--;
	            if(deg[it]==0)q.push(it);
	        }
	           
	       }
        cout<<topo.size()<<" "<<V;
	    if(topo.size()==V)return 1;
	    else return 0;
    }
};