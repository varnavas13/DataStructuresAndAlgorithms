#include <bits/stdc++.h>

using namespace std;

int main()
{
long long n,k,sum=0;
cin>>n>>k;
long long a[n];
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);    int y=1;

for(int i=n-1;i>=0;i--)
{
    sum+=a[i]*y;
    if((i-n)%k==0)
    y++;
}
cout<<sum;
return 0;
}
