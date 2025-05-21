#include <bits/stdc++.h>
using namespace std;
int main(){
long long a[1000000];
int x,count1=0,max1=0;
cin>>x;
max1=INT_MIN;
for(int i=0;i<x;i++)
{
cin>>a[i];
if(a[i]>max1)
{
    max1=a[i];
}
}
for(int i=0;i<x;i++)
{
    if(a[i]==max1)
    {

    count1++;
}
}
cout<<count1;
return 0;
}
