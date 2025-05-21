int possibleStringCount(char* word) {
    int ans=1;
    
    while(*word)
    {
        char* temp;
        temp++;
        if(*word==*temp)
        ans++;
        word++;
    }
    return ans;
}