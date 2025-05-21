#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[n];
        for(ll i=0;i<n;++i)
        cin>>a[i];
        sort(a,a+n);
        ll cnt=1;
        ll cntmx=1;
        for(ll i=1;i<n;++i)
        {
            if(a[i]-a[i-1]<=x)
            ++cnt;
            else
            cnt=1;
            cntmx=max(cnt,cntmx);
        }
        cout<<n-cntmx<<"\n";
    }
}