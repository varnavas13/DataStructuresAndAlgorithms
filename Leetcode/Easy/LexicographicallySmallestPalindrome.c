char* makeSmallestPalindrome(char* s) {
    int lo=0;
    int hi=strlen(s)-1;
    while(lo<hi)
    {
        if(s[lo]!=s[hi])
        {
            if(s[lo]>s[hi])
            {
                s[lo]=s[hi];
            }
            s[hi]=s[lo];
        }
        lo++;
        hi--;
    }
    return s;
}