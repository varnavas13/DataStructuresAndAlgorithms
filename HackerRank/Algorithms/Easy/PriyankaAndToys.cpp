#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long n,cn=1;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    long long mn=a[0];
    for(long long i=1;i<n;i++)
    {
        if(a[i]>mn+4)
        {
            cn++;
            mn=a[i];
        }
    }
    cout<<cn;
}
