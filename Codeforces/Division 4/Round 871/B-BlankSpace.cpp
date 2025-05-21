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
        ll n;
        cin>>n;ll a[n];
        for(ll i=0;i<n;++i)
        cin>>a[i];
        ll cntmx=0;ll cnt=0;
        for(ll i=0;i<n;++i)
        {
            if(a[i]==0)
            ++cnt;
            else
            {
                cntmx=max(cntmx,cnt);
                cnt=0;
            }
        }
        cntmx=max(cntmx,cnt);
        cout<<cntmx;
        
        
        
        
        
        cout<<"\n";
    }
}