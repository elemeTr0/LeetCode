int search(int* nums, int numsSize, int target) {
    int r=numsSize-1, l=0;
    while(l<=r){

        int mid = l+(r-l)/2;
        
        if(nums[mid]==target)
        return mid;

        if (nums[l] <= nums[mid]) {  // Left side is sorted
            if (nums[l] <= target && target < nums[mid])
                r = mid - 1;  // Target is in the left sorted part
            else
                l = mid + 1;  // Target is in the right part
        } else {  // Right side is sorted
            if (nums[mid] < target && target <= nums[r])
                l = mid + 1;  // Target is in the right sorted part
            else
                r = mid - 1;  // Target is in the left part
        }
    }
   
    return -1;
}
