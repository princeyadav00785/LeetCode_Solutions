// https://leetcode.com/problems/jump-game-iii

class Solution {
public:
bool canReach(vector<int>& arr, int start) {
        
		// if current Position (start) is less than 0 or exceeds arr size or has already been visited
		// we return false
        if(start >= arr.size() || start < 0 || arr[start] == -1)
            return false;
        
		// if current Position has element 0 we simply return true
        if(arr[start] == 0)
            return true;
        
        int k = arr[start];
        arr[start] = -1;
        
        return canReach(arr,start+k) || canReach(arr,start-k);
        
    }
};
