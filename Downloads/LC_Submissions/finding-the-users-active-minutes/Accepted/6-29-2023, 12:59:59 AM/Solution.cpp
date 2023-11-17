// https://leetcode.com/problems/finding-the-users-active-minutes

class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        map<int, set<int>> uamMap;  // Use a set instead of a vector for unique minutes
        for (auto log : logs) {
            int userId = log[0];
            int minute = log[1];
            
            // Insert the minute into the set of active minutes for the user
            uamMap[userId].insert(minute);
        }
        
        vector<int> answer(k, 0);
        for (auto& [userId, activeMinutes] : uamMap) {
            // Get the number of unique minutes for the user
            int uam = activeMinutes.size();
            
            // If the number of unique minutes is within the range of k, increment the corresponding count in the answer array
            if (uam <= k) {
                answer[uam - 1]++;
            }
        }
        
        return answer;
    }
};
