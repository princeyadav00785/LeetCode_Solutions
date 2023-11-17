// https://leetcode.com/problems/longest-uploaded-prefix

class LUPrefix {
public:
    vector<int> uploaded;
    int longest_prefix;

    LUPrefix(int n) {
        uploaded.resize(n + 1, 0); // Initialize an array to track uploaded videos
        longest_prefix = 0; // Initialize the longest uploaded prefix to 0
    }

    void upload(int video) {
        uploaded[video] = 1; // Mark the uploaded video as 1
        // Check if we can extend the longest uploaded prefix
        while (uploaded[longest_prefix + 1] == 1) {
            longest_prefix++;
        }
    }

    int longest() {
        return longest_prefix;
    }
};
