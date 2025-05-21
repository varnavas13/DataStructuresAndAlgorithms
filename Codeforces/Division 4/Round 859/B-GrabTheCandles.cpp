#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    
    for(ll q=0;q<n;++q)
    {
        ll sm1=0,sm2=0;
        ll t;
        cin>>t;
        for(ll i=0;i<t;++i)
        {
            ll tmp;
            cin>>tmp;
            if(tmp%2==0)
            sm1+=tmp;
            else
            sm2+=tmp;
        }
        if(sm1>sm2)
        cout<<"YES";
        else
        cout<<"NO";
        cout<<"\n";
    }
}