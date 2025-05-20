#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll sm=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        sm+=arr[i];
    }
    ll opt[sm+1];
    opt[0]=1;
    for(ll i=1;i<=sm;i++)
    opt[i]=0;
    for(ll i=0;i<n;i++)
    {
        for(ll k=sm;k>=0;k--)
        {
            if(k-arr[i]>=0&&opt[k-arr[i]]>0)
            {
                opt[k]=1;
            }
        }
    }
    vector<ll> v;
    for(ll i=1;i<=sm;i++)
    {
        if(opt[i]>0)
        {
            v.push_back(i);
        }
    }
    cout<<v.size()<<"\n";
    for(ll i=0;i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
}