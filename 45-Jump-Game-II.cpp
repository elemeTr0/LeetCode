class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;
        int currentEnd = 0; // The farthest point we can reach with the current number of jumps
        int farthest = 0;   // The farthest point we can reach overall

        for (int i = 0; i < nums.size() - 1; ++i) {
            farthest = max(farthest, i + nums[i]);  // Update the farthest point reachable

            if (i == currentEnd) {  // We've reached the end of the range for the current jump
                jumps++;             // Increment jump count
                currentEnd = farthest;  // Set the new range
            }
        }

        return jumps;
    }
};
