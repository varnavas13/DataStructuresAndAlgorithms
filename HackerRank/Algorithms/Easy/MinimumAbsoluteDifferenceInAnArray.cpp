#include <bits/stdc++.h>

using namespace std;

int main()
{
    
unsigned long long x,mx=INT_MAX;
cin>>x;
int a[x];
for(int i=0;i<x;i++)
cin>>a[i];
sort(a,a+x);
for(int i=1;i<x;i++)
{
    unsigned long long y=abs(a[i+1]-a[i]);
    if(y<mx)
    mx=y;
    
}
cout<<mx;
    return 0;
}

