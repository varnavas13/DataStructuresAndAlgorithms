#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,e,sum=0,sum1=0,sum2=0;
cin>>x;
int a[x][x];
for(int w =0;w<x;w++)
{
    for(int j=0;j<x;j++)
{
    cin>>a[w][j];
}
}

for(int i=0;i<x;i++)
{
    for(int j=0;j<x;j++)
    {
    if(i==j)
    {
        sum=sum+a[i][j];
    }
     if(i+j==x-1)
    {
        sum1=sum1+a[i][j];
    }

    }
}
sum2=abs(sum1-sum);
cout<<sum2<<endl;
return 0;
}
