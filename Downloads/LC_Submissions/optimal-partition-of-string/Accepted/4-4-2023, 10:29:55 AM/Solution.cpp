// https://leetcode.com/problems/optimal-partition-of-string

class Solution {
public:
    int partitionString(string s) {
        map<char,int>q;
        int cnt=0;
       q[s[0]]++;
        if(s.length()==1){return 1;}
        if(s.length()==2&&s[0]!=s[1]){return 2;}else if(s.length()==2&&s[0]==s[1]){return 1;}
        int i=1;
        while(i<s.length()){
            if(q.find(s[i])==q.end()) {
               q[s[i]]++;
            }else{
                for(auto x:q){
                    cout<<x.first<<" ";
                }cout<<endl;
                cnt++;
                q.clear();
                  q[s[i]]++;
            }
            
            i++;
        }
         if(!q.empty()) cnt++;
        return cnt;
        
//               unordered_map<int, int> mp;
//         int high=0, cnt=0;
        
//         while(high<s.size())
//         {
//             if(mp.find(s[high]-'a') != mp.end())
//             {
//                 mp.clear();
//                 cnt++;
//             }
//             mp[s[high]-'a'] = high;
//             high++;
//         }
//         if(!mp.empty()) cnt++;
//         return cnt;
    }
};