// https://leetcode.com/problems/smallest-number-in-infinite-set

class SmallestInfiniteSet {
public:
    priority_queue<int, vector<int>, greater<int>> q;
    vector<int> v;

    SmallestInfiniteSet() {
        v.resize(1e6); // Initialize v with all elements as 0
        for (int i = 1; i < 1e6; i++) {
            q.push(i);
            v[i] = 1;
        }
    }

    int popSmallest() {
        while (!q.empty()) {
            int t = q.top();
            q.pop();
            if (v[t] == 1) {
                v[t] = 0;
                return t;
            }
        }
        return -1; // Handle the case when the set is empty
    }

    void addBack(int num) {
        if (num >= 1 && num < 1e6 && v[num] == 0) {
            q.push(num);
            v[num] = 1;
        }
    }
};
