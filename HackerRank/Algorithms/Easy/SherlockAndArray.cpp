#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    for(ll q=0;q<t;++q)
    {
        bool ok=0;
        ll n;
        cin>>n;
        ll a[n],sm1=0,smol=0;
        for(ll i=0;i<n;++i)
        {
            cin>>a[i];
            smol+=a[i];
        }
        for(ll i=0;i<n;++i)
        {
            if(sm1==smol-a[i]-sm1)
            ok=1;
            sm1+=a[i];
        }
        if(ok)
        cout<<"YES";
        else
        cout<<"NO";
        
        
        
        
        
        cout<<"\n";
    }
}
