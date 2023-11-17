// https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        // 4 3 1 1 3 3 2
//         1 1 2 3 3 3 4
        
        vector<int > a;
     
        for(auto x : mp){
            a.push_back(x.second);
           
        }
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            if(k-a[i]<0){return a.size()-i;}
              if(k-a[i]==0){return a.size()-i-1;}
            k=k -a[i];
            
        }
        return 0;
    }
};