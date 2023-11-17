// https://leetcode.com/problems/last-stone-weight

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
//         class Solution {
// public:
//     int lastStoneWeight(vector<int>& a) {
//         priority_queue<int>pq(a.begin(),a.end());

//         while(pq.size() > 1)
//         {
//             int a = pq.top();
//             pq.pop();
//             int b = pq.top();
//             pq.pop();

//             if(a != b)
//                 pq.push(abs(a-b));
//         }
//         return pq.empty() ? 0 : pq.top();
        
          priority_queue<int, vector<int>> q;
        int x, y;
        
        for(auto x:stones)
            q.push(x);
        
        while(q.size() != 1){
            y = q.top();
            q.pop();
            x = q.top();
            q.pop();

            q.push(y-x);
        }
        
        return q.top();
//     }
// };
    }
};