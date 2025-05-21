
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ll a,b;
    cin>>a>>b;
    ll mx=-1;
    for(ll i=a;i<=b;++i)
    {
        for(ll j=i;j<=b;++j)
        mx=max(mx,i^j);
    }
    cout<<mx;

    return 0;
}
