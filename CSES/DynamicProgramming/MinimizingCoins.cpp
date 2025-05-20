#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll modulo=1000000007;
    ll n;
    cin>>n;
    ll target;
    cin>>target;
    ll arr[n];
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    ll opt[target+1];
    opt[0]=0;
    for(ll i=1;i<=target;i++)
    {
        opt[i]=INT_MAX;
        for(ll k=0;k<n;k++)
        {
            if(i-arr[k]>=0)
            opt[i]=min(opt[i],1+opt[i-arr[k]]);
        }
    }
    if(opt[target]==INT_MAX)
    cout<<-1;
    else
    cout<<opt[target];
}