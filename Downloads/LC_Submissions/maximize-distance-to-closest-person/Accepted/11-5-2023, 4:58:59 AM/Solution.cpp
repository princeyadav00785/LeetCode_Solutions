// https://leetcode.com/problems/maximize-distance-to-closest-person

#include <vector>

class Solution {
public:
    int maxDistToClosest(std::vector<int>& seats) {
        int maxDistance = 0;
        int lastPerson = -1;
        int n = seats.size();

        for (int i = 0; i < n; i++) {
            if (seats[i] == 1) {
                if (lastPerson == -1) {
                    maxDistance = i; // Distance to the first person
                } else {
                    maxDistance = std::max(maxDistance, (i - lastPerson) / 2);
                }
                lastPerson = i;
            }
        }

        // Calculate the maximum distance from the first and last empty seats to the closest person
        maxDistance = std::max(maxDistance, n - 1 - lastPerson);

        return maxDistance;
    }
};
