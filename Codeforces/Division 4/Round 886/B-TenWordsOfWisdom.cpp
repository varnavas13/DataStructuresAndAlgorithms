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
        cin>>n;
        ll mx=0;
        ll indx;
        for(ll i=0;i<n;++i)
        {
            ll a,b;
            cin>>a>>b;
            if(a<=10&&b>mx)
            {
                mx=b;
                indx=i+1;
            }
        }
        cout<<indx<<"\n";
    }
}