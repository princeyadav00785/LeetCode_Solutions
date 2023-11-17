// https://leetcode.com/problems/maximum-product-subarray

class Solution {
public:
    int maxProduct(vector<int>& A) {
     int  n= A.size();
    int r = A[0];
    for (int i = 1, imax = r, imin = r; i < n; i++) {
        if (A[i] < 0)
            swap(imax, imin);
        imax = max(A[i], imax * A[i]);
        imin = min(A[i], imin * A[i]);
        r = max(r, imax);
    }
    return r;

    }
};