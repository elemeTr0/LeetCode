int sort(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int blen = nums1Size + nums2Size;
    int i;
    int *b = (int*) malloc((blen) * sizeof(int));
    for (int i = 0; i<nums1Size; i++)
        b[i]=nums1[i];

    int r = nums1Size;
    
    for (int i = 0; i<nums2Size; i++){
    b[r]=nums2[i];
    r++;
    }
    qsort(b, blen, sizeof(int), sort);
    int left=0, right = blen-1, c;
    double med, p;
    if(blen%2==0){
        while (left<right)
    {
        p=b[left]+b[right];
        med=p/2;
        left++;
        right--;
    }
    }
    else
        med=b[blen/2];
    return med;
}