#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
  
  ll n,m;
  cin>>n>>m;
  ll a[n];
  for(ll i=0;i<n;i++)
  cin>>a[i];
  sort(a,a+n);
  while(m--)
  {
      ll x;
      cin>>x;
      ll mxmin=INT_MAX;
      ll indx=-1;
      for(ll i=0;i<n;i++)
      {
          if(a[i]<=x)
          {
              indx=i;
          }
      }
      if(indx==-1)
      cout<<indx<<"\n";
      else
      cout<<a[indx]<<"\n";
      a[indx]=INT_MAX;
  }
  
   return 0;
   
}