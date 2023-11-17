// https://leetcode.com/problems/next-greater-element-ii

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,-1);
        stack<int>st;
        int a= nums[n-1];
        for(int i=0;i<n;i++ ){
            if(nums[i]>a){
                a=nums[i];
                break;
            }
        }
        if(a!=nums[n-1]){st.push(a);}
        
        for(int i=n-1;i>-1;i--){
            while(!st.empty()&&nums[i]>=st.top()){
                st.pop();
            }
            if(!st.empty()){ans[i]=st.top();}
            st.push(nums[i]);
        }
        return ans;
    }
};