class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        set<int> b;
        for(int i = 0; i < nums1.size(); i++){
       for(int j  = 0; j< nums2.size(); j++){
         if(nums1[i]==nums2[j]){
               b.insert(nums1[i]);
         }
       }     
       
        }
        
         set<int>  ::iterator i;
        for(i = b.begin(); i!=b.end();i++){
          a.push_back(*i);              }
        return a;
        
    }
};