char* longestCommonPrefix(char** strs, int strsSize) {
    int i,j=0;
    int counter=1;
    int x=0;
    
    int min=strlen(strs[0]);
    
    for (int i=0; i<strsSize;i++)
    {
        if(strlen(strs[i])<min)
        min=strlen(strs[i]);
    }
    char *prefix= malloc((min+1)*sizeof(char));

    if (strsSize == 0) 
    return \\;

    while(j<min)
    {
        for (i=1;i<strsSize;i++)
    {
        if(strs[0][j]!=strs[i][j]){
            prefix[j]='\\0';
            return prefix;
        }   
        
    }
    prefix[j] = strs[0][j];
    j++;
    }

    prefix[j]='\\0';
    return prefix;
}