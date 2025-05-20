#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    ll ans=0;
    ll a[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    ll temp=a[n/2];
    for(ll i=0;i<n;i++)
    ans+=abs(a[i]-temp);
    cout<<ans;
}