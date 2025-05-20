#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    ll modulo=1000000007;
    ll target;
    cin>>n>>target;
    ll arr[n];
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    ll opt[target+1];
    for(ll i=0;i<=target;i++)
    opt[i]=0;
    opt[0]=1;
    for(ll i=0;i<=target;i++)
    {
        for(ll k=0;k<n;k++)
        {
            if(i-arr[k]>=0)
            {
             opt[i]=(opt[i-arr[k]]+opt[i])%modulo;   
            }
        }
    }
    cout<<opt[target];
    return 0;
}