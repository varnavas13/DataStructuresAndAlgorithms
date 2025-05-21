int minChanges(int n, int k) {
    if(n&k==0||k>n)
    return -1;
    int ans=0;
    while(n>0)
    {
        int temp1=n&1;
        int temp2=k&1;
        if(temp1==1&&temp2==0)
        ans++;
        else if(temp1==0&&temp2==1)
        return -1;
        n/=2;
        k/=2;
    }
    return ans;
}