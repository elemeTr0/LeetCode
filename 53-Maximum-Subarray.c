int maxSubArray(int* nums, int numsSize) {
    int max=0, sum=0;
    int currentSum=nums[0];
    int maxSum=nums[0];

    for (int i=1;i<numsSize;i++){
        currentSum = (currentSum>0) ? (currentSum+nums[i]) : nums[i];
        if (currentSum > maxSum)
            maxSum = currentSum;
    }
    return maxSum;
}