#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    ll ans=0;
    cin>>n;
    while(n!=0)
    {
        string temp=to_string(n);
        ll mx=0;
        for(ll i=0;i<temp.size();i++)
        {
            mx=max(mx,(ll)(temp[i]-'0'));
        }
        n-=mx;
        ans++;
    }
    cout<<ans;
}