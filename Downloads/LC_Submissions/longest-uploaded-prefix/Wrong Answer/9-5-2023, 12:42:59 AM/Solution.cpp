// https://leetcode.com/problems/longest-uploaded-prefix

class LUPrefix {
public:
    vector<bool> uploaded;
    int longest_prefix;

    LUPrefix(int n) {
        uploaded.resize(n + 1, false); // Initialize an array to track uploaded videos
        longest_prefix = 0; // Initialize the longest uploaded prefix to 0
    }

    void upload(int video) {
        if (video >= 1 && video < uploaded.size()) {
            uploaded[video] = true; // Mark the uploaded video as true
            // Check if we can extend the longest uploaded prefix
            while (longest_prefix < uploaded.size() && uploaded[longest_prefix + 1]) {
                longest_prefix++;
            }
        }
    }

    int longest() {
        return longest_prefix;
    }
};
