// https://leetcode.com/problems/minimum-number-of-operations-to-make-arrays-similar

class Solution {
public:
    long long makeSimilar(vector<int>& a, vector<int>& b) {
    vector<int>c;
        vector<int>d;
        vector<int>c1;
        vector<int>d1;
        for(int i=0;i<a.size();i++){
            if(a[i]%2==0){
                c.push_back(a[i]);
            }
            if(a[i]%2!=0){
                d.push_back(a[i]);
            }
             if(b[i]%2==0){
                c1.push_back(b[i]);
            }
            if(b[i]%2!=0){
                d1.push_back(b[i]);
            }
        }
        sort(c.begin(),c.end());
          sort(c1.begin(),c1.end());
          sort(d.begin(),d.end());
          sort(d1.begin(),d1.end());
        int cnt=0;
        for(int i=0;i<c.size();i++){
            cnt+=abs(c[i]-c1[i]);
        }
        for(int i=0;i<d.size();i++){
            cnt+=abs(d[i]-d1[i]);
        }
        return cnt/4;
    }
};