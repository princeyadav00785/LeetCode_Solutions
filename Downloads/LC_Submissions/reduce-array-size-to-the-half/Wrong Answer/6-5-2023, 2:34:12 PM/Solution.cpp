// https://leetcode.com/problems/reduce-array-size-to-the-half

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        priority_queue<int>q;
        for(auto x:mp){
            q.push(x.second);
        }
        int cnt=0,sum=0;
        while(sum<=arr.size()/2){
            sum+=q.top();
            cnt++;
            q.pop();
        }
        
        
        return cnt;
    }
};