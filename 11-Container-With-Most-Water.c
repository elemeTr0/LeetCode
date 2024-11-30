int maxArea(int* height, int heightSize) {
    int max=0;
    int l=0, r=heightSize-1;
    while (l<r)
    {
        int minWall=fmin(height[l],height[r]);
        int water = minWall*(r-l);
            if(water>max)
            max=water;

        if (height[l] < height[r]) {
            l++;
        } else {
            r--;
        }
        }
    return max;
}