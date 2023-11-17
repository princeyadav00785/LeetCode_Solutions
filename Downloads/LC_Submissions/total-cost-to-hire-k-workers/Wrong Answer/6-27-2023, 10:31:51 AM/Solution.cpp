// https://leetcode.com/problems/total-cost-to-hire-k-workers

class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int c) {
        if(2*c+k>=costs.size()){
            vector<int>c(costs.begin(),costs.end());
            sort(c.begin(),c.end());
        long long sum=0;
        for (int i=0;i<k;i++)
            sum+=c[i];
        
        return sum;
        }
        
        else 
         {long long ans = 0;  // Variable to store the total cost
        int n= costs.size();
        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q; 
        for(int i=0; i<c;i++){
            q.push({costs[i],0});
            cout<<costs[i]<<" ";
        }
        for(int j=n-1;j>n-1-c;j--){
            q.push({costs[j],1});
             cout<<costs[j]<<" ";
        }
        int ind=1;
        int l=k;
        while(l--){
            ans+= q.top().first;
            int f= q.top().second;
            q.pop();
            if(f==1){
                if(n-1-c-ind>-1)
                q.push({costs[n-1-c-ind],1});
                
            }else {
                if(c+ind-1<n)
                q.push({costs[c+ind-1],0});
            }
            ind++;
        }
        
        
        
        return ans;}
    }
};