#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    ll a[n+1],b[n+1];
    for(ll i=0;i<=n;++i)
    cin>>a[i];
    
    for(ll i=0;i<=n;++i)
    cin>>b[i];
    ll ans=0;
    ll need=0;
    ll multiplier=1;
    ll temp;
    for(ll i=n;i>0;--i)
    {
        if(b[i]>a[i])
        {
         temp=(ceil)((b[i]-a[i])/2.0) ;
         ans+=temp;
         a[i-1]-=temp;
        }
    }
    if(a[0]>=b[0])
    cout<<ans;
    else
    cout<<-1;
}