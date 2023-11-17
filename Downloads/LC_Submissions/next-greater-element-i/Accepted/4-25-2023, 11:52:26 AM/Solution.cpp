// https://leetcode.com/problems/next-greater-element-i

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         stack<int> s;
//        map<int,int>mp;
//         for(int i=nums2.size()-1;i>-1;i--){
//             if(s.empty()){
//                 mp[nums2[i]]=-1;
//                 s.push(nums2[i]);
//             }
//             else{
//                 int tp= s.top();
//                 while(nums2[i]>tp){
//                     s.pop();
//                 }
//                  if(s.empty()){
//                 mp[nums2[i]]=-1;
//                 s.push(nums2[i]);
//             }else {
//                      mp[nums2[i]]=tp; 
//                  }
//                 s.push(nums2[i]);
//             }
            
//         }
//         vector <int> ans;
//         // for(int i=0;i<nums1.size();i++){
//         //     ans.push_back(mp[nums1[i]]);
//         // }
//                              return ans;
         vector<int> res(nums1.size(), -1); //to be returned, initialize it with -1.
        stack<int> st;
        unordered_map<int, int> umap;
        
        for(int i=0; i<nums2.size(); i++)
        {
            int element = nums2[i];
            
            while(!st.empty() && element > st.top())
            {
                //NGE of st.top() is element
				
                umap[st.top()] = element;
                st.pop();
            }
            
            st.push(element);
        }
        
        for(int i=0; i<nums1.size(); i++)
        {
            int ele = nums1[i];
            
            if(umap.find(ele) != umap.end())
            {
                int nge = umap[ele];
                res[i] = nge; //push NGE of desired element
            }
                
        }
        
        return res;
    }
};