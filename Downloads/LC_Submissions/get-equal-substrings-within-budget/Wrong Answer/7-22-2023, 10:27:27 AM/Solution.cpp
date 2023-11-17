// https://leetcode.com/problems/get-equal-substrings-within-budget

class Solution {
public:
    vector<int>v;
    int equalSubstring(string s, string t, int maxCost) {
        for(int i=0;i<s.length();i++){
            int k = abs(s[i]-t[i]);
            v.push_back(k);
        }
       int cnt=0,sum=0,ans=0,a=0;
        for(int i=0;i<s.length();i++){
            if(sum+v[i]<=maxCost){
                sum+=v[i];
                cnt++;
            }else{
                while(sum+v[i]>maxCost){
                    sum-=v[a++];
                    cnt--;
                }
                if(sum+v[i]<maxCost){
                    cnt++;
                    sum+=v[i];
                }
                
            }
            ans=max(ans,cnt);
        }
        
        return ans;
    }
};

// int i=0,j=0,ans=0,sum=0;
//         while(j<n){
//             sum+=cost[j];
            
//             if(sum<=maxCost){
//                 ans=max(ans,j-i+1);
//             }
            
//             while(sum>maxCost){
//                 sum-=cost[i++];
//             }
//             j++;
//         }
//         return ans;