// https://leetcode.com/problems/median-of-two-sorted-arrays

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <double> n;
        for(int i = 0; i< nums1.size(); i++){
            n.push_back(nums1[i]);
        }
            for(int i = 0; i< nums2.size(); i++){
             n.push_back(nums2[i]);
        }
        sort(n.begin(), n.end());
        int n1 = n.size();
        double median =0;
       cout<<n1;
        if(n.size()%2==0){
             median = (n[n1/2 -1]+n[n1/2+1-1])/2;
        }else{
             median = n[(n1+1)/2 -1];
        }
       return median; 
    }
};