int lengthOfLastWord(char* s) {
    int i=strlen(s)-1, count=0;
    while (s[i]==' ')
        i--;
    while (i>=0 && s[i]!=' ')
    {
        count++;
        i--;
    }
    return count;
}
