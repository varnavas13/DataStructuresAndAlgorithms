#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   
   ll n;
   cin>>n;
   ll a[n][n];
   for(ll i=0;i<n;i++)
   {
       for(ll k=0;k<n;k++)
       {
           a[i][k]=1;
           if(i==k)
           a[i][k]=0;
       }
   }
   for(ll i=0;i<n;i++)
   {
       a[i][0]=i;
       a[0][i]=i;
   }
   ll temp=n-1;
   while(temp!=0)
   {
       if(temp%2==0)
       {
           ll x=a[temp][0];
           for(ll j=0;a[temp][j]!=0;j++)
           {
               a[temp][j]=x;
               a[j][temp]=x;
               x++;
           }
       }
       else
       {
           ll x=a[temp][0];
             for(ll j=0;a[temp][j]!=0;j++)
           {
               a[temp][j]=x;
               a[j][temp]=x;
               x--;
           }   
       }
       temp--;
   }
   for(ll i=0;i<n;i++)
   {
       for(ll k=0;k<n;k++)
       {
           cout<<a[i][k]<<' ';
       }
       cout<<"\n";
   }
    return 0;
}