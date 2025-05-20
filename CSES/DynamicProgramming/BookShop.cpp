#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    ll modulo=1000000007;
    ll target;
    cin>>n>>target;
    ll a[n],b[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];
    for(ll i=0;i<n;i++)
    cin>>b[i];
    ll opt[target+1];
    for(ll i=0;i<=target;i++)
    opt[i]=0;
    for(ll i=0;i<n;i++)
    {
        for(ll k=target;k>=0;k--)
        {
            if(k-a[i]>=0)
            {
                if(k-a[i]==0||(k-a[i]>0&&opt[k-a[i]]>0))
                opt[k]=max(opt[k],b[i]+opt[k-a[i]]);
            }
        }
    }
    
    ll mx=0;
    for(ll i=0;i<=target;i++)
    mx=max(mx,opt[i]);
    cout<<mx;
    return 0;
}