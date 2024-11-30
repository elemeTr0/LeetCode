bool canJump(int* nums, int numsSize) {
    int reach = 0; // This variable will track the farthest index we can reach
    
    for (int i = 0; i < numsSize; i++) {
        if (i > reach) {
            // If we are at an index beyond our reach, return false
            return false;
        }
        // Update the reach
        reach = fmax(reach, i + nums[i]);
        // If we can reach or go beyond the last index, return true
        if (reach >= numsSize - 1) {
            return true;
        }
    }
    
    return false; // If we finish the loop and never reach the last index
}