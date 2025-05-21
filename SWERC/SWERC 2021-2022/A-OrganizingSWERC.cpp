#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    { ll sum=0;
        bool c[10]={};
        bool x2=true;
       ll n;
       cin>>n;
       ll a[n],b[n];
       for(ll i=0;i<n;i++)
       cin>>a[i]>>b[i];
       if(n<10)
       cout<<"MOREPROBLEMS"<<"\n";
       else
       {
           for(ll i=0;i<n;i++)
           {
               c[b[i]-1]=true;
           }
           for(ll i=0;i<10;i++)
           if(c[i]==false)
           {
           cout<<"MOREPROBLEMS"<<"\n";
           x2=false;
           break;
           }
           if(x2)
           {
               for(ll i=1;i<=10;i++)
               {
                   ll mx=-2;
                   for(ll k=0;k<n;k++)
                   {
                       if(b[k]==i)
                       {
                           if(a[k]>mx)
                           mx=a[k];
                       }
                   }
                   sum+=mx;
               }
               cout<<sum<<"\n";
           }
       }
    }
}