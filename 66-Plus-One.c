/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int *result = (int *)malloc((digitsSize+1) * sizeof(int));
    for (int i = 0; i < digitsSize; i++) {
        result[i] = digits[i];
    }
    int k=digitsSize-1;
    result[k]++;

    while(k>=0 && result[k]==10)
    {
            result[k]=0;
            if(k>0)
            result[k-1]++;
        k--;
    }

    if (result[0] == 0) {
        result[0] = 1;
        result[digitsSize] = 0;
        *returnSize = digitsSize + 1;
    } else {
        *returnSize = digitsSize;
    }
    return result;
}