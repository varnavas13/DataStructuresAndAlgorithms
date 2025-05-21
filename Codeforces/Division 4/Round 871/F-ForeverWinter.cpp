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
        ll n,m;
        cin>>n>>m;
        unordered_map<ll,ll>mp;
        for(ll i=0;i<m;++i)
        {
            ll x,y;
            cin>>x>>y;
            mp[x]++;
            mp[y]++;
        }
        ll mx=0,mxv;
        vector<ll>v1;
        ll cnt1=0;
        for(ll i=1;i<=n;++i)
        {
            if(mp[i]==1)
            ++cnt1;
        }
        ll x=n-cnt1-1;
        ll y=((n-(x+1))/x);
       cout<<x<<' '<<y;
        
        
        
        cout<<"\n";
    }
}