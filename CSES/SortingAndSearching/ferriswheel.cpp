#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    ll m;
    cin>>m;
   // ll ans=0;
    ll a[n];
    for(ll i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    ll ans=0;
    ll l=0,r=n-1;
    while(l<=r)
    {
        
            if(a[l]+a[r]<=m)
            {
                ans++;
                l++;
                r--;
            }
            else
            {
                ans++;
                r--;
            }
        

    }
    cout<<ans;
}