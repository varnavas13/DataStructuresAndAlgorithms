#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    ll cnt=0;
    map<ll,ll>mp;
    ll x;
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        if(mp[x]==0)
        cnt++;
        mp[x]++;
    }
    cout<<cnt;
}