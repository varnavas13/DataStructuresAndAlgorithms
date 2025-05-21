#include <bits/stdc++.h>

using namespace std;
int main()
{
       int k,n,cnt=0;
n=1;
int s;
    cin>>s>>k;
    while(s--)
    {
        long long x;
        cin>>x;
        for(long long i=1;i<=x;i++)
        {
            if(n==i)
            {
            
            cnt++;
        }
            if(i%k==0)
            n++;
        }
        if(x%k!=0)
        n++;
    
}
cout<<cnt;
return 0;
}
