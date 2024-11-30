int mySqrt(int x) {
    long r=x/2, l =1;
    long int pow=0;
    while (1)
    {
        pow=l*l;
        if(pow>x)
            return l-1;
        if(pow==x)
            return l;

        l++;
    }
    return l;
}