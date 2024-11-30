int searchInsert(int* nums, int numsSize, int target) {
    int i,k=0;
    for (i=0; i<numsSize; i++)
    {
        if(nums[i]==target)
        {
            return i;
            break;
        }
        else
        {
            for(int j=0;j<numsSize;j++)
            {
                if(nums[j]<target)
            k++;
            }
            return k;
        }
    }
    return i;
}