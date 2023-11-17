// https://leetcode.com/problems/count-of-smaller-numbers-after-self

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> v;
       stack<int>st;
        for(int i=nums.size()-1;i>-1;i--){
            
         while(!st.empty()&&st.top()>=nums[i]){
             cout<<st.top()<<" "<<nums[i]<<endl;
             st.pop();
         }
            if(st.empty())v.push_back(0);
            else v.push_back(st.size());
            st.push(nums[i]);
        }
        reverse(v.begin(),v.end());
     return v;   
    }
};