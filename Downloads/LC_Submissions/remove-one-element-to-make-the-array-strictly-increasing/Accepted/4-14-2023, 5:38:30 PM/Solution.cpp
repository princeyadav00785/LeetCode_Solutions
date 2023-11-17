// https://leetcode.com/problems/remove-one-element-to-make-the-array-strictly-increasing

class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        stack<int> st;
    int count = 0;
    for(auto ele : nums)  // first we'll traverse from start
    {
       while(!st.empty() && st.top() >= ele)
           count++,st.pop();
        st.push(ele);
    }
while(!st.empty()) // make the stack empty
    st.pop();
	
int count2 = 0;
for(int i = nums.size() - 1 ; i >= 0 ; --i) // now we'll traverse from end
{
    while(!st.empty() && st.top() <= nums[i])
        count2++,st.pop();
    st.push(nums[i]);
}

if(count == 0 || count == 1 || count2 == 0 || count2 == 1) // if any of these condition is true 
    return true;
return false;
    }
};