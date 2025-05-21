#include <bits/stdc++.h>

using namespace std;

int main()
{
long long cnt1=0,cnt2=0;
long long x,sum=0,k;
cin>>x>>k;
int a[x],ip[x];
for(int i=0;i<x;i++)
{
    int n;
    cin>>a[i]>>n;
    if(k-x>=0)
    sum+=a[i];
    else{
    if(n==0)
    {
        sum+=a[i];
    }
    else
    ip[cnt1++]=a[i];
}
}
sort(ip,ip+cnt1);
if(cnt1-k>=0)
{
for(int i=0;i<cnt1;i++)
{
    if(i>=cnt1-k)
    sum+=ip[i];
    else
    sum-=ip[i];
}
}
else{
for(int i=0;i<cnt1;i++)
sum+=ip[i];
}
cout<<sum;
return 0;
}
