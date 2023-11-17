// https://leetcode.com/problems/minimum-moves-to-equal-array-elements

class Solution {
public:
    int minMoves(vector<int>& nums) {
  	int m=INT_MAX;
			for(int n:nums) m = min(m,n);
			int ans=0;
			for(int n:nums) ans+=n-m;
			return ans;

    }
};

// 1 3 5 7
// 