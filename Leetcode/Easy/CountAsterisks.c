int countAsterisks(char* s) {
    int cnt=0;
    int ans=0;
    while(*s)
    {
        if(cnt%2==0&&*s=='*')
        ans++;
        if(*s=='|')
        cnt++;
        s++;
    }
    return ans;
}