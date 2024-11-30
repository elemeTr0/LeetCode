bool isPalindrome(int x) {
    long int r=0;
    int p = x;
    for (;x>0;x/=10)
        r=r*10+x%10;
    if (r==p)
    return 1;
    else
    return 0;
}