// https://leetcode.com/problems/remove-stones-to-minimize-the-total

class Solution {
public:
    int minStoneSum(vector<int>& v, int k) {
        priority_queue<int>q(v.begin(),v.end());
        int ans=0;
        while(k--){
            int a=0;
            a=q.top()/2;
           
            ans+=a;
           a=q.top();
               q.pop();
            if(a%2!=0){
                a=a/2+1;
            }else a=a/2;
            q.push(a);
            
        }
        int sum=0;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }
        return sum-ans;
        
//         1391 5916
    }
};