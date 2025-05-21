#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        bool b1=false;
        long long n1,n2,f,l;
        cin>>n1>>n2;
        for(long long i=n1;i<=n2;++i)
        {
            long long x=sqrt(i);
            if(x*x==i)
            {
                b1=true;
                f=x;
                break;
            }
        }
        for(long long i=n2;i>=n1;--i)
        {
            long long x=sqrt(i);
            if(x*x==i)
            {
                b1=true;
                l=x;
                break;
            }
        }
        if(b1==0)
        cout<<0<<endl;
        else
        cout<<l-f+1<<endl;
        
    }
}
