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
    ll arr[n];
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    ll mx=INT_MIN;
    for(ll i=0;i<n;i++)
    mx=max(mx,arr[i]);
    ll sm=0;
    for(ll i=0;i<n;i++)
    {
        sm+=arr[i];
        if(sm>mx)
        mx=sm;
        if(sm<0)
        sm=0;
    }
    cout<<mx;

    return 0;
}