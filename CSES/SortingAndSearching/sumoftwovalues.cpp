#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,m;
    cin>>n>>m;
    ll a[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)
    {
        if(mp[m-a[i]]!=0)
        {
            cout<<mp[m-a[i]]<<" "<<i+1;
            return 0;
        }
        mp[a[i]]=i+1;
    }
    cout<<"IMPOSSIBLE";
    return 0;

}