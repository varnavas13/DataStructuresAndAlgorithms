#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;    int a[n];

    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[n-i-1]*pow(2,i);
    }
    cout<<sum;
}
