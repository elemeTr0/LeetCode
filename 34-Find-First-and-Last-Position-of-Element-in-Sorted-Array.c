int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int *b = malloc(2 * sizeof(int));
    b[0] = -1; 
    b[1] = -1; 

 
    int l = 0, r = numsSize - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (nums[mid] >= target) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    if (l < numsSize && nums[l] == target) {
        b[0] = l;
    } else {
        *returnSize = 2;
        return b; 
    }
    r = numsSize - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (nums[mid] <= target) {
            l = mid + 1;
        } else {
            r = mid - 1; 
        }
    }
    b[1] = r;

    *returnSize = 2;
    return b;
}