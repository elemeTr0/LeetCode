int roman(int p)
{
    switch (p){
        case 'M': p=1000; break;
        case 'D': p=500; break;
        case 'C': p=100; break;
        case 'L': p=50; break;
        case 'X': p=10; break;
        case 'V': p=5; break;
        case 'I': p=1; break;
        default: p=0; break;
    }
    return p;
}
int romanToInt(char* s) {
    int k=0;
    for  (int i=0; roman(*(s+i))>0; i++)
    {
        if(roman(*(s+i))>=roman(*(s+i+1)))            
        k = k + roman(*(s+i));
        else
        {
            k = k + roman(*(s+i+1))-roman(*(s+i));
            i++;
        }
    }
    return k;
}