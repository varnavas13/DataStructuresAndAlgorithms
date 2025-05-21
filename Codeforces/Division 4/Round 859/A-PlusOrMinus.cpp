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
        ll a,b,c;
        cin>>a>>b>>c;
        if(c==a+b)
        cout<<'+';
        else
        cout<<'-';
        cout<<"\n";
    }
}