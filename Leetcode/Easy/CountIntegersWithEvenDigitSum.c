int countEven(int num) {
    int ans=0;
    for(int i=2;i<=num;i++)
    {
        int found=0;
        int temp=i;
        int sm=0;
        while(temp>0)
        {
            sm+=(temp%10);
            temp/=10;
        }
        if(sm%2==0)
        ans++;
    }
    return ans;
}