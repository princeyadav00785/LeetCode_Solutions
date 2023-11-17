// https://leetcode.com/problems/number-of-laser-beams-in-a-bank

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
//     int  ans=0;
//         vector<int>v;
//         int x=0,prev=0;
//         for(int i=0;i<bank.size();i++){
//             // if(x!=0){prev=x;x=0;}
//             x=0;
//                   for(int j=0;j<bank[i].size();j++){
//                       string s=bank[i];
//             if(s[j]=='1')x++;
//         }  
//             if(x!=0){
//                 // ans+=prev*x;
//                 v.push_back(x);
//                     }
//         }
//         for(int i=1;i<v.size();i++){
//             // cout<<v[i-1]<<" ";
//             ans+= v[i]*v[i-1];
//         }
//         return ans;
        
        int ans = 0, prev = 0, count = 0;
    for(string s: bank) {
        count = 0;
        for (int i = 0; i < s.size(); i++) 
            if (s[i] == '1') count++;
        if (count) {
            ans += prev * count;
            prev = count;
        }
    }
    return ans;
    }
};