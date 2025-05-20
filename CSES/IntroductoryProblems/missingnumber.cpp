#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    ll sm=n*(n+1)/2,sm2=0;
    for(ll i=1;i<n;i++)
    {
        ll x;
        cin>>x;
        sm2+=x;
    }
    cout<<sm-sm2;
}